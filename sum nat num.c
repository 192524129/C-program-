#include <stdio.h>

// Recursive function to calculate sum of natural numbers
int sumNatural(int n) {
    if (n == 0)
        return 0;  // Base case
    else
        return n + sumNatural(n - 1);  // Recursive case
}

int main() {
    int num, sum;

    // Input from user
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Please enter a positive number.\n");
    } else {
        sum = sumNatural(num);
        printf("Sum of first %d natural numbers is: %d\n", num, sum);
    }

    return 0;
}