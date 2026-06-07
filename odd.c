/*Wap to display odd number from 1 to n number*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any positive number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Odd Number form 1 to n number:\n");
        for(int i=1;i<n;i++)
        {
            if(i%2==1)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}