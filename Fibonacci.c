#include <stdio.h>

// Function to print Fibonacci series
void printFibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    // Call the function
    printFibonacci(terms);

    return 0;
}