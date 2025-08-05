#include <stdio.h>

int main() {
    int n, i;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Print numbers from 1 to N
    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");  // New line after printing all numbers
    return 0;
}