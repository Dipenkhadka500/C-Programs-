/*Wap to convert lowercase to uppercase */
#include<stdio.h>
#include<string.h>

void uppercase(char *);
void lowercase(char *);

int main()
{
    char s[100];

    printf("Enter the string: ");
    scanf("%s", s);

    uppercase(s);
    printf("The uppercase string is %s\n", s);

    lowercase(s);
    printf("The lowercase string is %s\n", s);

    return 0;
}

void uppercase(char *s)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}

void lowercase(char *s)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}