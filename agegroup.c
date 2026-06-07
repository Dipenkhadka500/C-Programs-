/*Wap to display following*/
/*age|terminology*/
/*0-1|Infant*/
/*2-3|Todddler*/
/*4-12|child*/
/*13-19|teenage*/
/*20-49|adult*/
/*50above|old*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of person:");
    scanf("%d",&age);
    if(age<1)
    {
        printf("Infant");
    }
    else if(age>2 && age<3)
    {
        printf("Toddler");
    }
    else if(age>4 && age<12)
    {
        printf("Child");
    }
    else if(age>13 && age<19)
    {
        printf("Teenage");
    }
    else if(age>20 && age<49)
    {
        printf("Adult");
    }
    else
    {
        printf("Old");
    }
    return 0;
}