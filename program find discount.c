//program to find discount
#include<stdio.h>
int main()
{
  int amount,price,discount,num;
  printf("Enter the price of an item:");
  scanf("%d",&price);
  printf("Enter the number of items bought:");
  scanf("%d",&num);
  amount=price*num;
  discount=(amount-0.1*amount);
  printf("The amount of items purchased is %d",discount);
  
  



  return 0;
  }
