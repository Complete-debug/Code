#include <stdio.h>
int main () {
    int i = 0, j = 0, rows = 0, columns = 0;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &columns);

    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            printf (" * ");
        }
        printf("\n");
    }

return 0;
}
