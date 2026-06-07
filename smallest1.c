/*Wap to find smallest among two numbers*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("Smallest number is:%d\n",a);
    }
    else
    {
        printf("Smallest number is:%d",b);
    }
    return 0;
}