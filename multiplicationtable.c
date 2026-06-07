/*Wap to display multiplication table of a number*/
#include<stdio.h>
int main()
{
    int n,i,product;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Multiplication table of %d:\n",n);
    for(i=1;i<=10;i++)
    {
      product=n*i;
      printf("%dx%d=%d\n",n,i,product);
    }
    return 0;
}