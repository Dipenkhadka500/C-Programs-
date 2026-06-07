/*Wap to read name ,class and rollno. structure named student and display the list of students in alphabetical order*/
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int class;
    int roll;
};
int main()
{
    struct student s[5];
    struct student temp;
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of student:");
        scanf("%s",s[i].name);
        printf("Enter the class of student:");
        scanf("%d",&s[i].class);
        printf("Enter the roll no.of student:");
        scanf("%d",&s[i].roll);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Arranged name of student are:%s\n",s[i].name);
    }
    return 0;
}