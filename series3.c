/*Sum of series 1-X+X^2-X^3......+(-1)^nX^n*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    int sum=0,term;
    printf("Enter a number of terms and variable:\n");
    scanf("%d%d",&n,&x);
    for(int i=0;i<=n;i++)
    {
    term=pow(-1,i)*pow(x,i);
    sum+=term;
    }
    printf("Sum of the term of series:%d",sum);
    return 0;
}