/*Wap to convert the temperature from fahrenheit to celcius*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Converted temperature is %f",c);
    return 0;
}