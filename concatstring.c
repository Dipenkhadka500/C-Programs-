/*Wap to concatenate two string without using library function*/
#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j;
    printf("Enter the first string:");
    scanf("%s",a);
    printf("Enter the second string:");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[i]!='\0';j++)
        {
            a[i]=b[j];
        }
        a[i]='\0';
    }
    printf("Concatenated String:%s",a);
    return 0;
}