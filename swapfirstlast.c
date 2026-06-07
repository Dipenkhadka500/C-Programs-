/*Wap to display and swap the first and last digits of five digits number*/
#include<stdio.h>
int main()
{
    int num,n1,n2,n3,n4,n5;
    printf("Enter the five digits number:");
    scanf("%d",&num);
    n5=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n1=num%10;
    num=num/10;
    printf("Before Swapping is:%d%d%d%d%d\n",n1,n2,n3,n4,n5);
    printf("After swapping is:%d%d%d%d%d",n5,n2,n3,n4,n1);
    return 0;
}