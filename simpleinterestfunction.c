/*Wap to find the simple interest using function*/
#include<stdio.h>
int interest(int p,int t,int r)
{
    return (p*t*r)/100;
}
int main()
{
    int p,t,r;
    printf("Enter the principle,time,rate:\n");
    scanf("%d%d%d",&p,&t,&r);
    printf("Simple interest:%d",(p*t*r)/100);
    return 0;
}