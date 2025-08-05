#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i = 1;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci Series up to %d terms:\n", n);

    while (i <= n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        i++;
    }

    printf("\n");
    return 0;
}