// program to pint integer
#include<stdio.h>
int main()
{
  int num;
  printf("enter any umber:");
  scanf("%d",&num);
  if (num%5 == 0)
  {
    printf("The number is divisible by five");
  }
  else
  {
    printf("The number is not divisible by five");
  }

  return 0;
}