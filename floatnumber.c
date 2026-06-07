/*Wap to display any 5 float number*/
#include<stdio.h>
int main()
{
    int i;
    float n[5];
    printf("Enter the number:\n");
    for(i=0;i<5;i++)
    {
    scanf("%f\t",&n[i]);
    }
    printf("Floating numbers are:\n");
    for(i=0;i<5;i++)
    {
    printf("%f,",n[i]);
    }
return 0;
}