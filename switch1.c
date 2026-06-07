/*Wap to demostrate arithmetic operations using switch statement*/
#include<stdio.h>
int main()
{
    int ch,a,b;
    printf("Enter the choice:\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n");
    scanf("%d",&ch);
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
        printf("The addition of %d and %d is %d",a,b,a+b);
        break;
        case 2:
        printf("The subtration of %d and %d is %d",a,b,a-b);
        break;
        case 3:
        printf("The multiplication of %d and %d is %d",a,b,a*b);
        default:
        case 4:
        printf("The division of %d and %d is %d",a,b,a/b);
        break; 

    }
    return 0;
}