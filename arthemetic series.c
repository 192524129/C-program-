#include <stdio.h>

// Recursive function to calculate arithmetic series sum
int arithmeticSeriesSum(int a, int d, int n) {
    if (n == 0)
        return 0;
    else
        return a + arithmeticSeriesSum(a + d, d, n - 1);
}

int main() {
    int a, d, n;

    // Input first term, common difference, and number of terms
    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate and display the sum
    int sum = arithmeticSeriesSum(a, d, n);
    printf("Sum of the arithmetic series: %d\n", sum);

    return 0;
}