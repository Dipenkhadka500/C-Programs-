/*Wap to find the sum of the series 1+2+3+...+nth term*/
#include<stdio.h>
int main()
{
    int n;
    int i,sum=0;
    printf("Enter any positive number:");
    scanf("%d",&n);
    if(n>0)
    {
     for(i=1;i<=n;i++)
     {
        sum+=i;
     }
    printf("Sum of the series:%d",sum);
    }
    return 0;
}