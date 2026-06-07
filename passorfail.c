/*Wap to display pass or fail statement has to attend all together six subjects*/
#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,s6;
    printf("Enter the marks of six subjects:");
    scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
    if(s1>32 && s2>32 && s3>32 && s4>32 && s5>32 && s6>32)
    {
        printf("Student is pass");
    }
    else
    {
        printf("Student is fail");
    }
    return 0;
}