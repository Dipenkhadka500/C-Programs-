/*Wap to convert the temperature from celcius to fahrenheit*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celcius:");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("converted temperature is%f:",f);
    return 0;

}