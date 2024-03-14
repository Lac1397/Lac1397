#include <stdio.h>
#include <math.h>
     // function blueprint
float add(float a, float b); 
float sub(float a, float b); 
float mul(float a, float b); 
float div(float a, float b); 
float mod(float a, float b); 
      //user defined function
float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

float mod(float a, float b) {
    fmod(a, b);
}
int main(void) {
  char choice;
  float a, b, result;

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
      scanf("%f %f", &a, &b);
      printf("The Result is %f\n", add(a, b));
      break;
    case '-':
      printf("enter two numbers:\n ");
      scanf("%f %f", &a, &b);
      printf("The Result is %f\n", sub(a, b));
      break;
    case '*':
      printf("enter two numbers:\n ");
      scanf("%f %f", &a, &b);
      printf("The Result is %f\n", mul(a, b));
      break;
    case '/':
      printf("enter two numbers:\n ");
      scanf("%f %f", &a, &b);
      printf("The Result  is %f\n", div(a, b));
      break;
      printf("Invalid operator");
    case '%':
      printf("Enter two integers for modulo: ");
      scanf("%f %f", &a, &b);
      if (b != 0) {
          printf("Result: %f\n", mod(a, b));
      } else {
          printf("Error: Cannot calculate modulo with divisor zero.\n");
      }
      break;
    case 'q':
      printf("Exiting the program. Goodbye!\n");
      break;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 'q');
  return 0;
}
