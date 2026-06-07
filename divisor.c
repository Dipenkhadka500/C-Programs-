/*Wap to find divisor of a number*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Divisor of %d are:",n);
    if(n!=1 || n<1)
    {
        printf("Invalid number:");
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}