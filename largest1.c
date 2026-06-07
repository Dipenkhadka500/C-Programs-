/*Wap to find largest number among two number*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("Largest Number:%d",a);
    }
    else
    {
        printf("Largest Number:%d",b);
    }
    return 0;
}