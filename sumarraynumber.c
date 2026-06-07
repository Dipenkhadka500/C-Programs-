/*Wap to display sum of n number using array*/
#include<stdio.h>
int main()
{
    int i,sum=0,num[100],n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    if(n>100 && n<0)
    {
        printf("Invalid terms");
    }
    else
    {
        printf("Enter the numbers:\n");
        for(i=0;i<n;i++)
        {
          scanf("%d",&num[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=num[i];
    }
    printf("The sum of %d numbers is:%d",n,sum);
    return 0;
}