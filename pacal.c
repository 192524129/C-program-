#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {
        // Print leading spaces
        for(j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print stars with space
        for(k = 0; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}