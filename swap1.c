/*Wap to swap value of two numbers using temporary variable*/
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two swaping variables:\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping Variables:a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping Variables:a=%d,b=%d",a,b);
    return 0;
}