#include <stdio.h>

// Recursive function to calculate sum of divisors
int sumOfDivisors(int num, int i) {
    if (i == 1)
        return 1;
    if (num % i == 0)
        return i + sumOfDivisors(num, i - 1);
    else
        return sumOfDivisors(num, i - 1);
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Check if number is perfect
    int sum = sumOfDivisors(number, number / 2);  // Only check till num/2
    if (sum == number)
        printf("%d is a Perfect Number.\n", number);
    else
        printf("%d is NOT a Perfect Number.\n", number);

    return 0;
}