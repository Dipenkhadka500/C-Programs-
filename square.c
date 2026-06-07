/*Wap to find the area andd perimeter of square*/
#include<stdio.h>
#include<math.h>
int main()
{
    float l,a,p;
    printf("Enter the side length of square:");
    scanf("%f",&l);
    a=pow(l,2);
    p=4*l;
    printf("Area of square is%f",a);
    printf("Perimeter of square is%f",p);
    return 0;

}