#include<stdio.h>
#include <stdio.h>

int main() {
    char ch; 
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input. Please enter an alphabet.\n");
            }
    }

    return 0;
}
