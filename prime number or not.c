#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for numbers less than or equal to 1
    if (num <= 1) {
        isPrime = 0;
    }

    // Check divisibility using while loop
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    // Display result
    if (isPrime)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not a Prime Number.\n", num);

    return 0;
}