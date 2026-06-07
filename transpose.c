/*Wap to find transpose of given matrix*/
#include<stdio.h>
int main()
{
    int i,j,a[100][100],r,c;
    printf("Enter the rows and columns of the matrix A:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}