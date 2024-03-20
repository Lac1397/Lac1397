#include <stdio.h>

int cube(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           
            *(arr + i * cols + j) = (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j));
        }
    }
}


int print(int *arr, int rows, int cols) {
    printf("Cube of the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of rows : ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    cube(&arr[0][0], rows, cols);

    print(&arr[0][0], rows, cols);

    return 0;
}