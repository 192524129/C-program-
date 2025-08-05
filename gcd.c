#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;  // Base case
    else
        return gcd(b, a % b);  // Recursive case
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call recursive GCD function
    result = gcd(num1, num2);

    // Display result
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}