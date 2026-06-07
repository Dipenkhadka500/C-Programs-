/*Wap to convert given days into year,month and days */
#include<stdio.h>
int main()
{
    int total_days,years,months,rem,days;
    printf("Enter the number of days:");
    scanf("%d",&total_days);
    years=total_days/365;
    rem=total_days%365;
    months=rem/30;
    days=rem%30;
    printf("%d days is equivalent to:%d years %d months %d days",total_days,years,months,days);
    return 0;
}
