#include <stdio.h>

int main() {
    
    int base,height,area;

    
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

   
    area = 0.5 * base * height;

    
    printf("The area of the triangle with base %d and height %d is %d\n", 
     base, height, area);

    return 0;
}
