/*Wap to read a number and display a reverse of number using do-while loop*/
#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    do
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }while(num!=0);
    printf("Reverse digit:%d",rev);
    return 0;
}
