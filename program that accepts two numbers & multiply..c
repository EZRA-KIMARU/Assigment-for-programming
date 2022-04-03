// program to pint integer
#include<stdio.h>
int main()
{
  int num1,num2;
  printf("enter the first integer:");
  scanf("%d",&num1);
  printf("enter the second integer:");
  scanf("%d",&num2);
  printf("entered number is %d,%d",num1,num2);
  {
  int mul= num1 * num2;
  printf(" Multiplication of entered numbers is %d",mul);
  scanf("%d",&mul);
  }
  return 0;

  
}