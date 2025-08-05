#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate sum using while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    // Output the result
    printf("Sum of numbers from 1 to %d = %d\n", n, sum);

    return 0;
}