#include<stdio.h>
int main()
{
  int num1,num2,num3,min;
  printf("enter the value of num1:");
  scanf("%d", &num1);
  printf("enter the value of num2:");
  scanf("%d", &num2);
  printf("enter the value of num3:");
  scanf("%d", &num3);
   if (num1 < num2) {
          if (num1 < num3) {
              min = num1;
          } else {
              min = num3;
          }
      } else {
          if (num2 < num3) {
              min = num2;
          } else {
              min = num3;
          }
      }

      printf("Minimum number among %d, %d, and %d is: %d", num1, num2, num3, min);

      return 0;
  }
