#include <stdio.h>

int main(void) {
    int choice = 0;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Pattern Generator\n");
        printf("2. Pascal's Triangle\n");
        printf("3. Grade Calculator\n");
        printf("4. Palindrome Checker\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected Pattern Generator.\n");
            break;
        case 2:
            printf("You selected Pascal's Triangle.\n");
            break;
        case 3:
            printf("You selected Grade Calculator.\n");
            break;
        case 4:
            printf("You selected Palindrome Checker.\n");
            break;
        case 5:
            printf("You selected Exit.\n");
            break;
        default:
            printf("Invalid choice. Try again!\n");
                break;
        }

    } while (choice != 5);
    
    return 0;
}