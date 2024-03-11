#include <stdio.h>
     // function blueprint
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div(float a, float b) { return a / b; }
int mod(int a, int b) { return a % b; }
      //user defined function
int main(void) {
  char choice;
  int a, b, result;

  do {

    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %\n");
    printf("Enter 'q' to quit\n");

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
    case '+':
      printf("enter two numbers:\n ");
      scanf("%d %d", &a, &b);
      printf("The Result is %d\n", add(a, b));
      break;
    case '-':
      printf("enter two numbers:\n ");
      scanf("%d %d", &a, &b);
      printf("The Result is %d\n", sub(a, b));
      break;
    case '*':
      printf("enter two numbers:\n ");
      scanf("%d %d", &a, &b);
      printf("The Result is %d\n", mul(a, b));
      break;
    case '/':
      printf("enter two numbers:\n ");
      scanf("%d %d", &a, &b);
      printf("The Result  is %f\n", div(a, b));
      break;
      printf("Invalid operator");
    case '%':
      printf("enter two numbers:\n ");
      scanf("%d %d", &a, &b);
      if (b != 0) {
        printf("Result: %d\n", mod(a, b));
      } else {
        printf("Error: Modulo by zero!\n");
        printf("The Result is %d\n", mod(a, b));
      }
    case 'q':
      printf("Exiting the program. Goodbye!\n");
      break;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 'q');
  return 0;
}
