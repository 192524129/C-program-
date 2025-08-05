#include <stdio.h>

int main() {
    int n, i, rowStart = 0, rowEnd, colStart = 0, colEnd;

    printf("Enter the size of square spiral (odd number recommended): ");
    scanf("%d", &n);

    // Create an empty matrix
    char mat[n][n];

    // Initialize all elements with space
    for(i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            mat[i][j] = ' ';

    rowEnd = colEnd = n - 1;

    // Spiral filling with '*'
    while (rowStart <= rowEnd && colStart <= colEnd) {
        // Top row
        for (i = colStart; i <= colEnd; i++)
            mat[rowStart][i] = '*';
        rowStart++;

        // Right column
        for (i = rowStart; i <= rowEnd; i++)
            mat[i][colEnd] = '*';
        colEnd--;

        // Bottom row
        for (i = colEnd; i >= colStart; i--)
            mat[rowEnd][i] = '*';
        rowEnd--;

        // Left column
        for (i = rowEnd; i >= rowStart; i--)
            mat[i][colStart] = '*';
        colStart++;
    }

    // Print the matrix
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%c ", mat[i][j]);
        printf("\n");
    }

    return 0;
}