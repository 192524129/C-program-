#include <stdio.h>

// Recursive function to calculate power (base^exp)
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;  // Base case: any number to power 0 is 1
    else
        return base * power(base, exponent - 1);  // Recursive case
}

int main() {
    int base, exponent, result;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    // Validate input
    if (exponent < 0) {
        printf("Exponent must be non-negative.\n");
    } else {
        result = power(base, exponent);
        printf("%d^%d = %d\n", base, exponent, result);
    }

    return 0;
}