/*Wap to display the name of day as per number*/
#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the choice(1-7):");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        default:
        printf("Saturday");
        break;
    }
    return 0;
}