// program to check if number is positive or negative
#include<stdio.h>
int main ()
{
  int num;
  printf("Enter the number:");
  scanf("%d",&num);

  if(num > 0)
  {
    printf("The number is POSITIVE");
  }
  if(num < 0)
  {
    printf("The number is NEGATIVE");
  }
  if(num == 0)
  {
    printf("The number is ZERO");
  }  

  return 0;
}