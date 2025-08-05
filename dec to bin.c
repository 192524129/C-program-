#include <stdio.h>

// Recursive function to convert decimal to binary
void decimalToBinary(int num) {
    if (num == 0)
        return;
    
    decimalToBinary(num / 2);      // Recursive call with quotient
    printf("%d", num % 2);         // Print remainder
}

int main() {
    int number;

    // Input a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Binary equivalent: ");

    if (number == 0)
        printf("0");
    else
        decimalToBinary(number);

    printf("\n");
    return 0;
}