/*Wap to print four digit number in reverse order*/
#include<stdio.h>
int main()
{
    int num,n,a,b,c,d;
    printf("Enter the four digits of number:");
    scanf("%d",&num);
    n=num;
    d=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    a=n%10;
    printf("Reverse digits are:%d%d%d%d",d,c,b,a);
    return 0;
}