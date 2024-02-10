#include <stdio.h>

int main(){
    int first;
    int second;

  printf("type your angle:");
  scanf("%d",&first);

  printf("type your angle :");
  scanf("%d",&second);

  int third=180-(first+second);
  
  printf("your angle is : %d",third);

  
  return 0;
}