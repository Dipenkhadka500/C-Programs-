/*Wap to display the customer information of a bank balance is greater than 10000 using structure*/
#include<stdio.h>
struct customer
{
    char name[20];
    int id;
    int balance;
};
int main()
{
    int n,i;
    printf("Enter the number of customer:");
    scanf("%d",&n);
    struct customer c[n];
    for(i=0;i<n;i++)
    {
       printf("Enter the name of customer:");
       scanf("%s",c[i].name);
       printf("Enter the id of the customer:");
       scanf("%d",&c[i].id);
       printf("Enter the balance of customer:");
       scanf("%d",&c[i].balance);
    }
    printf("Customer with balance greater than 10000\n");
    for(i=0;i<n;i++)
    {
        if(c[i].balance>10000)
        {
            printf("Name of customer:%s\n",c[i].name);
            printf("The id no. of customer:%d\n",c[i].id);
            printf("The balance of customer is:%d\n",c[i].balance);
        }
    }
    return 0;
}
