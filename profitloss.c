/*Wap to find profit or loss*/
#include<stdio.h>
int main()
{
    float cp,sp;
    float profit,loss;
    printf("Enter the cost price:");
    scanf("%f",&cp);
    printf("Enter the selling price:");
    scanf("%f",&sp);
    if(sp>cp)
    {
      profit=sp-cp;
      printf("Profit is:%f",profit);
    }
    else{
        loss=cp-sp;
        printf("Loss is:%f",loss);
    }
    return 0;
}