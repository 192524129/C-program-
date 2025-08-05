#include <stdio.h>

// Recursive function to sum first n even numbers
int sumEven(int n) {
    if (n == 0)
        return 0;
    return 2 * n + sumEven(n - 1);
}

int main() {
    int n;

    // Input
    printf("Enter how many even numbers to sum: ");
    scanf("%d", &n);

    // Output
    printf("Sum of first %d even numbers is: %d\n", n, sumEven(n));

    return 0;
}