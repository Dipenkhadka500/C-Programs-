/*Wap to read the name,address,id number of 10 student and display name in ascending order*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        char name[20];
        char address[20];
        int id;
    };
    struct student s[10],temp;
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter the name of student:");
        scanf("%s",s[i].name);
        printf("Enter the address of student:");
        scanf("%s",s[i].address);
        printf("Enter the id number of student:");
        scanf("%d",&s[i].id);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Arranged data:\n");
    for(i=0;i<10;i++)
    {
        printf("Name of student:%s\n",s[i].name);
        printf("Address of student:%s\n",s[i].address);
        printf("ID no.of student:%d\n",s[i].id);
    }
    return 0;
}