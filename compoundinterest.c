/*Wap to find compund interest*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r;
    float ci,ca;
    printf("Enter the principle,time,rate:\n");
    scanf("%f%f%f",&p,&t,&r);
    ca=p*(pow(1+r/100,t));
    ci=ca-p;
    printf("Compound Interest:%f",ci);
    return 0;
}