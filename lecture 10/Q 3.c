#include <stdio.h>

int main() {
    int number, a, b, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    b = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    a = number;

    sum = a + b;

    printf("Sum of a and b: %d\n", sum);

    return 0;
}