/*Wap to find grade of the student*/
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=90 && marks<100)
    {
        printf("The grade of student is A+");
    }
    else if (marks>=80 && marks<90)
    {
        printf("The grade of student is A");
    }
    else if (marks>=70 && marks<80)
    {
        printf("The grade of student is B+");
    }
    else if(marks>=60 && marks<70)
    {
        printf("The grade of student is B");
    }
    else if(marks>=50 && marks<60)
    {
        printf("The grade of student is C+");
    }
    else if(marks>=40 && marks<50)
    {
        printf("The grade of student is C");
    }
    else if(marks>=30 && marks<40)
    {
        printf("The grade of student is D+");
    }
    else if (marks>0 && marks<30)
    {
        printf("The grade of student is F");
    }
    else{
        printf("Student got NG");
    }
    return 0;
}