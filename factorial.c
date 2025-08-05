#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, result;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the function
        result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}