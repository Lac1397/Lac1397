#include <stdio.h>

int main() {
    char alphabet = 'a';

    do {
        printf("%c, ", alphabet);
        alphabet=alphabet+4;
    } while (alphabet <= 'z');

    printf("\n");

    return 0;
}

