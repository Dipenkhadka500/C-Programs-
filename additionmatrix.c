/*Wap to find adiition of two matrices and display the answer*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int a[5][5],b[5][5],sum[5][5];
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            printf("Enter the element b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);

        }
    }
    printf("Matrix A is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getch();
}