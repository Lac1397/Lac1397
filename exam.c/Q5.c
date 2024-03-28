#include <stdio.h>
struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int N;
    printf("Enter the number of cars: ");
    scanf("%d", &N);
    struct Car cars[N];
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for Car %d:\n", i + 1);
        printf("Model ");
        scanf("%s", cars[i].model);
        printf("Year ");
        scanf("%d", &cars[i].year);
        printf("Price ");
        scanf("%f", &cars[i].price);
    }
    printf("\nDetails of all cars:\n");
    for (int i = 0; i < N; i++) {
        printf("Car %d\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("\n");
    }

    return 0;
}
