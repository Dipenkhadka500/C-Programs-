/*Wap to create an array of structure to store the record of 10 students.implement loop to take data of 10 students and display the records of only maile students*/
#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    char gender[20];
    int rollno;
};
int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the name of the student:");
        scanf("%s",s[i].name);
        printf("Enter the gender of student:");
        scanf("%s",s[i].gender);
        printf("Enter the Roll no. of student:");
        scanf("%d",&s[i].rollno);
    }
    printf("Records of Male student:\n");
    for(i=0;i<10;i++)
    {
        if(strcmp(s[i].gender,"male")==0)
        {
            printf("Name:%s\n",s[i].name);
            printf("Roll no.:%d",s[i].rollno);
        }
    }
    return 0;
}