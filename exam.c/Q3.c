#include <stdio.h>
void reverseString(char *str) {
   
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;
    while (start < end) {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

   
    reverseString(str);

   
    printf("Reversed string: %s\n", str);

    return 0;
}
