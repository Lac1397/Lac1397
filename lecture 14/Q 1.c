#include <stdio.h>

int main() {
    int size;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Negative elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
