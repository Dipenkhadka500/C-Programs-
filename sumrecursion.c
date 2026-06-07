/*Wap to find sum of n natural number using recurion*/
#include<stdio.h>
int sum(int);
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Sum of %d natural numbers:%d",n,sum(n));
}
