/*Wap to print the sum of digits of four digits number*/
#include<stdio.h>
int main()
{
    int n,n1,n2,n3,n4;
    int sum=0;
    int org;
    printf("Enter the four digits number:");
    scanf("%d",&org);
    n=org;
    n4=n%10;
    sum+=n4;
    n=n/10;
    n3=n%10;
    sum+=n3;
    n=n/10;
    n2=n%10;
    sum+=n2;
    n=n/10;
    n1=n%10;
    sum+=n1;
    printf("Sum of digits of %d is %d",org,sum);
    return 0;
}