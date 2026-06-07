/*Wap to find the area and perimeter of traingle*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    float a,p,s;
    printf("Enter the three sides of triangle:\n");
    scanf("%d%d%d",&x,&y,&z);
    p=x+y+z;
    s=p/2;
    a=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("Area of triangle:%f\n",a);
    printf("Perimeter of Triangle:%f",p);
    return 0;
    
}