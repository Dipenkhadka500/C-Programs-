/*Wap to find th simple interest*/
#include<stdio.h>
int main()
{
    int p,t,r;
    float si;
    printf("Enter the principle,time,rate:");
    scanf("%d%d%d",&p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple Interest:%f",si);
    return 0;
}