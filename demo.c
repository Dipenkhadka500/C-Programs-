#include<stdio.h>
int main()
{
  char a[]="DIPEN";
  int i,j;
  for(i=0;i<5;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c ",a[i]);
    }
    printf("\n");
  }
  return 0;
}