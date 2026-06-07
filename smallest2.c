/*Wap to find smallest among three numbers*/
#include<stdio.h>
int main()
{
    int a,b,c,smallest1,smallest2;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    smallest1=a<b?a:b;
    smallest2=smallest1<c?smallest1:c;
    printf("Smallest Number=%d",smallest2);
    return 0;
}