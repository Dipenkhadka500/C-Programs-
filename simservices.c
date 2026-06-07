/*Wap to display the services options for any network*/
#include<stdio.h>
#include<string.h>
int main()
{
    int ch;
    char ussdcode[20];
    printf("Enter the ussd code of the sim:");
    scanf("%s",ussdcode);
    if(strcmp(ussdcode,"*123#")==0)
    {
        printf("Connected.Welcome to network services.\n");
    }
    printf("Enter the choice(1-6):");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Exclusive offer");
        break;
        case 2:
        printf("Sadhain on pack");
        break;
        case 3:
        printf("Unlimited voice pack");
        break;
        case 4:
        printf("Saapati");
        break;
        case 5:
        printf("SMS pack");
        break;
        case 6:
        printf("Go to Ncell app");
        break;
        default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}