/*Wap to find the factorial of a number*/
#include<stdio.h>
int main()
{
    int i,fact=1;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
        if(n<0)
        {
         printf("Factorial of %d is invalid");
        }
        else{
            for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            printf("Factorial of %d is %d",n,fact);
        }
        return 0;
}