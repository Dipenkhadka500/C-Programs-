/*Wap to read name and rollno.of one student and display the record using structure*/
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
};
int main()
{
   struct student s;
   printf("Enter the name of student:");
   scanf("%s",s.name);
   printf("Enter the rollno:");
   scanf("%d",&s.rollno);
   printf("The name of student:%s\n",s.name);
   printf("The rollno.of student:%d",s.rollno);
   return 0; 
}