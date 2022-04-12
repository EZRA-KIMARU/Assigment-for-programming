//program to find sum of first 10 numbers
#include<stdio.h>
int main()
{
   int n,sum = 0;
  printf("The first 10 numbers are:");
   for (n = 1; n <= 10; n ++ )
     {
       printf("%d ",n);
     }
  {
    sum=(sum+n);
  }
  printf("the sum is: %d",sum);
    return 0;
  }
  