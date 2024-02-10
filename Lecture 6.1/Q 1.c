#include <stdio.h>

int main(void) {

  printf("enter the value of celsius :");
  int c;

  scanf("%d",&c);
  printf("\n value in fahrenheit : %d ",c*9/5+32);
  return 0;
}