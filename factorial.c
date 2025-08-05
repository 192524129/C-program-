#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using for loop
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output result
        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}