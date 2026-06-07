/*Wap to find roots of quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,dis,r1,r2;
    printf("Enter the coefficients of equation:");
    scanf("%lf %lf %lf",&a,&b,&c);
    dis=(b*b)-(4*a*c);
    if(dis>0)
    {
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("Roots:%lf and %lf",r1,r2);
    }
    else if(dis==0)
    {
     r1=-b/(2*a);
     printf("Root:%lf",r1);
    }
    else{
        printf("Roots are imaginary");
    }
    return 0;
}