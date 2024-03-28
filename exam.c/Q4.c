#include <stdio.h>
int MAX_SIZE =100;

void squareElements(int *arr, int size) {
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        *ptr *= *ptr; 
        ptr++; 
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    squareElements(arr, size);

    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
