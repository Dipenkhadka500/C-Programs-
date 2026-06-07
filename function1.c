/*Wap to display the sum of first n natural number using function*/
#include<stdio.h>
int sum(int n);
int sum(int n)
{
    int i,add=0;
    for(i=0;i<=n;i++)
    {
        add+=i;
    }
    return add;
}
    int main()
    {
        int add,n;
        printf("Enter the number:");
        scanf("%d",&n);
        add=sum(n);
        printf("Sum of natural number is %d",add);
        return 0;
    }
