/*Wap to multiplication table of a given number using function*/
#include<stdio.h>
int mul(int,int);
int mul(int n,int i)
{
    return n*i;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Multiplication table is invalid");
    }
    else{
        printf("Multiplicaton table of %d\n",n);
        for(int i=1;i<=10;i++)
        {
        printf("%dx%d=%d\n",n,i,mul(n,i));
        }
    }
    return 0;
}