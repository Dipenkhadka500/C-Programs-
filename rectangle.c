/*Wap to find the area and perimeter of rectangle*/
#include<stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter the sides of rectangle:");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("Area of rectangle is%f",a);
    printf("Perimeter of rectangle is%f",p);
    return 0;
}