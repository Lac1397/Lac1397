#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = rows; i>= 1; i--) {
       
        for (int j = 1; j <= i-1; j++) {
            printf("  ");
        }

        
        for (int k = i; k<= rows; k++) {
            printf("%d", k);

      
            if (k != rows) {
                printf(" ");
            }
        }

        
        printf("\n");
    }

    return 0;
}