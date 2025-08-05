#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call recursive function and display result
    int sum = sumOfDigits(number);
    printf("Sum of digits = %d\n", sum);

    return 0;
}