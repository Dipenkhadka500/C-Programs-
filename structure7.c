/*Wap to create structure named students with data members name,rollno,class subjects and marks.
take data for n students in a array dynamically and then find the total marks obtained.*/
#include<stdio.h>
struct student{
    char name[20];
    int roll;
    char faculty[20];
    int marks;
};
int main()
{
    int n,i,total_marks=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student:");
        scanf("%s",s[i].name);
        printf("Enter the roll no. of student:");
        scanf("%d",&s[i].roll);
        printf("Enter the faculty of student:");
        scanf("%s",s[i].faculty);
        printf("Enter the marks of student:");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
      total_marks+=s[i].marks;
    }
    printf("Total marks obtained:%d",total_marks);
    return 0;
}