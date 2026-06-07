/*Wap to find a number is armstrong or not using while loop*/
#include<stdio.h>
#include<math.h>
int main()
{
    int rem;
    int num,c,sum=0,digit=0;
    printf("Enter the number:");
    scanf("%d",&num);
    c=num;
    while(c!=0)
    {
        c=c/10;
        digit=digit+1;
    }
    c=num;
    while(c!=0)
    {
        rem=c%10;
        sum=sum+pow(rem,digit);
        c=c/10;
    }
    if(sum==num)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is not Armstrong");
    }
    return 0;
}