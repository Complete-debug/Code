#include <stdio.h>
int main () {
    int stars = 0, rows = 0, columns = 0;
    printf("Enter number of rows:");
    scanf("%d", &stars);

    printf("Enter number of columns:");
    scanf("%d", &columns); 

    for (int i = 1; i <= stars; i++) {
        for (int j = 2; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}