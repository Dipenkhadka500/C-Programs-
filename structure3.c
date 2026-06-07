/*Wap to read and display the date of birth of 10 students using nested structure*/
#include<stdio.h>
#include<string.h>
    struct dob
    {
       int day;
       int month;
       int year;
    };
    struct student
    {
        struct dob d;
    };
    struct student s[10];
    int main()
    {
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the day of birth:");
        scanf("%d",&s[i].d.day);
        printf("Enter the month of birth:");
        scanf("%d",&s[i].d.month);
        printf("Enter the year of birth:");
        scanf("%d",&s[i].d.year);
    }
    for(i=0;i<10;i++)
    {
        printf("Date of birth:%02d-%02d-%d\n",s[i].d.day,s[i].d.month,s[i].d.year);
    }
    return 0;
    }
