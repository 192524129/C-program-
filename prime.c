#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and display result
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}