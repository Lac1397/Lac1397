#include <stdio.h>

int main(){

  int a,b,c;
  printf("enter the first number : ");
  scanf("%d",&a);

  printf("enter the second number : ");
  scanf("%d",&b);

  printf("enter the third number : ");
  scanf("%d",&c);


  a=b;
  b=c;
  c=a;

  printf("the first swapping result is : %d\n",a);
  printf("the second swapping result is : %d\n",b);
  printf("the third swapping result is : %d\n",c);

  return 0;
}