/*Wap to multiplication of matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[100][100],b[100][100],c[100][100],r1,c1,r2,c2;
    printf("Enter the number of rows and column for th e first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columnn for the second matrix:");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        printf("Enter the elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
               scanf("%d",&a[i][j]); 
            }
        }
        printf("Enter the elements of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Martix A is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Matrix B is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Multiplication of matrix A and b is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    getch();
}