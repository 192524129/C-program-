#include <stdio.h>

int main() {
    int i, j, n;

    // Input the size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for columns
        for (j = 1; j <= n; j++) {
            // Print * at borders, space inside
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}