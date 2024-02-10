#include <stdio.h>

int main(void) { 

int BS;
int HRA;
int TA;
int DA;

  printf("enter the number of BS :");
  scanf("%d",&BS);

  printf("\nenter the number of HRA :");
  scanf("%d",&HRA);

  printf("\nenter the number of TA :");
  scanf("%d",&TA);

  printf("\nenter the number of DA :");
  scanf("%d",&DA);

  printf("\n your salary is : %d",BS+HRA+DA+TA);

  return 0;
}