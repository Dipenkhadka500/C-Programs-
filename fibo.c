/*Wap to display number of fibonacci series using while loop*/
#include<stdio.h>
int main()
{
    int n;
    int t1=0,t2=1;
    int next=t1+t2;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    printf("%d,%d,",t1,t2);
    int i=3;
    while(i<=n)
    {
        printf("%d,",next);
        t1=t2;
        t2=next;
        next=t1+t2;
        i=i+1;
    }
    return 0;
}
