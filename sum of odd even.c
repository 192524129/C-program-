#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddSum = 0;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Loop from 1 to N
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            evenSum += i;  // Add to even sum
        else
            oddSum += i;   // Add to odd sum
    }

    // Output the results
    printf("Sum of even numbers from 1 to %d = %d\n", n, evenSum);
    printf("Sum of odd numbers from 1 to %d = %d\n", n, oddSum);

    return 0;
}