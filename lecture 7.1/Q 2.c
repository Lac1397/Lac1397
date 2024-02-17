#include<stdio.h>
int main()
{
  int num;
  printf("enter the value of num:");
  scanf("%d",&num);
  if(num>0){
    printf("the number is positive");
     }else if(num<0){
    printf("the number is negative");
    }
    else {
      printf("%d is neutral.", num);
  return 0;
     }
}