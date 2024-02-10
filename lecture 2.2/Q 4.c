#include<stdio.h>
int main()
{
 int principal,rate,time,simple_intrest;

  printf("enter the principal amount ");

  scanf("%d",&principal);

  printf("enter the rate of intrest  ");

  scanf("%d",&rate);

  printf("enter the time ");

  scanf("%d",&time);

  simple_intrest =((principal*rate*time)/100);

  printf("simple_intrest is %d",simple_intrest);
  
  return 0;
  
  
  
  
}