#include <stdio.h>

int main() {
    int choice;

   
    printf("Telecom Call Service Conversation Menu:\n");
    printf("1. Press 1 for English\n");
    printf("2. Press 2 for Hindi\n");
    printf("3. Press 3 for Gujarati\n");

   
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            printf("You have selected English.\n");
            printf("Welcome to Telecom Call Service in English.\n");
            break;

        case 2:
            printf("You have selected Hindi.\n");
            break;

        case 3:
            printf("You have selected Gujarati.\n");
            break;
        }

           return 0;
       }
