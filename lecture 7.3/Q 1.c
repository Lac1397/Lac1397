#include <stdio.h>

int main() {
    
    int num1, num2, num3;

   
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

   
    printf("The minimum number is: %d\n", min);

    return 0;
}
