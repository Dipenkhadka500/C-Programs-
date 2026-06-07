/*Wap to check whether the given number is prime or composite number using function*/
#include<stdio.h>
void num(int);
void num(int n)
{
    int count=0;
    if(n<=1)
    {
        printf("%d is neither prime nor composite",n);
    }
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is prime number",n);
    }
    else{
        printf("%d is composite number",n);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    num(n);
    return 0;
}
