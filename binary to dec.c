#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, rem;

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    long long binary;
    int decimal;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Call the function
    decimal = binaryToDecimal(binary);

    // Display the result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}