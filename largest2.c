/*Wap to find largest number among three numbers*/
#include<stdio.h>
int main()
{
    int a,b,c,largest1,largest2;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    largest1=a>b?a:b;
    largest2=largest1>c?largest1:c;
    printf("Largest Number=%d",largest2);
    return 0;
}