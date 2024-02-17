#include<stdio.h>
int main()
{
  int num1,num2,min;
  printf("enter the value of num1:");
  scanf("%d", &num1);
  printf("enter the value of num2:");
  scanf("%d", &num2);
  if(num1<num2){
    min=num1;
  } else {
    min=num2;
    } 
    printf("The minimum number is %d",min);
  return 0;
  
  }
  