/*Wap to display pattern*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}