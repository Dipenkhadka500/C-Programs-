/*Wap to define a structure name of employee having data member if name age salary position and address and find average salary*/
#include<stdio.h>
struct employee{
    char name[20];
    int age;
    int salary;
    char position[20];
    char address[20];
};
int main()
{
    int total=0,avg;
    int n,i;
    printf("Enter the number of employee:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of employee:");
        scanf("%s",e[i].name);
        printf("Enter the age of the employee:");
        scanf("%d",&e[i].age);
        printf("Enter the salary of employee:");
        scanf("%d",&e[i].salary);
        printf("Enter the position of employee:");
        scanf("%s",e[i].position);
        printf("Enter the address of the employee:");
        scanf("%s",e[i].address);        
    }
    
    for(i=0;i<n;i++)
    {
        total+=e[i].salary;
        avg=total/n;
    }
    printf("Average salary is%d",avg);
    return 0;
}