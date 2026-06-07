/*Wap to find a number is palindrome or not*/
#include<stdio.h>
int main()
{
    int num,reverse=0,rem,num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    num=num1;
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(reverse==num1)
    {
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    return 0;
}