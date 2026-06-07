/*Wap to find the srting is pallindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    printf("Enter the string:");
    scanf("%s",a);
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b)==0)
    {
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}