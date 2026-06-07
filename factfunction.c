/*Wap to find the factorial of a number using function*/
#include<stdio.h>
int fact(int);
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
     f*=i;
    }
    return f;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial is not possible:");
    }
    else{
        printf("Factorial number:%d",fact(n));
    }
    return 0;
}