/*Wap to find the length of string without using bulit in fuction*/
#include<stdio.h>
int main()
{
    char a[100];
    int len=0;
    printf("Enter the string:");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
      len++;
    }
    printf("The length of string is:%d",len);
    return 0;
}