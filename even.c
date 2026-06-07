/*Wap to find even number from 1 to 20*/
#include<stdio.h>
int main()
{
    int i;
    printf("Even number from 1 to 20:\n");
    for(i=0;i<20;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}