/*Wap to find area and perimeter of circle*/
#include<stdio.h>
#include<math.h>
#define pi 3.1428571

int main()
{
    float r,a,p;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    a=pow(r,2)*pi;
    p=2*pi*r;
    printf("Area of circle is %f",a);
    printf("Perimeter of circle is %f",p);
    return 0;
}