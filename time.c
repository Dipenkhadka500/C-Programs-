/*Wap to take input time in seconds and display it into hour,minute and second formate*/
#include<stdio.h>
int main()
{
    int total_seconds,hours,minutes,seconds,rem;
    printf("Enter the total time in seconds:");
    scanf("%d",&total_seconds);
    hours=total_seconds/3600;
    rem=total_seconds%3600;
    minutes=rem/60;
    seconds=rem/60;
    printf("%d seconds is equivalent to:%d hours %d minutes %d seconds",total_seconds,hours,minutes,seconds);
    return 0;
}