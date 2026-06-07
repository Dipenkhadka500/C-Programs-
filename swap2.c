/*Wap to swap value of two numbers without using temporary variable*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two variable:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping :a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping :a=%d,b=%d",a,b);
    return 0;
}