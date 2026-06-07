/*Wap to find the sum of the series 1+3+5+...+nth term*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=(2*i+1);
    }
    printf("Sum of the series:%d",sum);
    return 0;
}