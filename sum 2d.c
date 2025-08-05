#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int arr[10][10];
    int sum = 0;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input array elements
    printf("Enter elements of the %dx%d array:\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum using pointer
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum += *(*(arr + i) + j);
        }
    }

    // Output the sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}