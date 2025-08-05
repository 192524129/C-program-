#include <stdio.h>
#include <math.h>

// Recursive function to calculate geometric series sum
double geometricSeriesSum(double a, double r, int n) {
    if (n == 0)
        return 0;
    else
        return a * pow(r, n - 1) + geometricSeriesSum(a, r, n - 1);
}

int main() {
    double a, r;
    int n;

    // Input first term, common ratio and number of terms
    printf("Enter the first term (a): ");
    scanf("%lf", &a);

    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate and display the sum
    double sum = geometricSeriesSum(a, r, n);
    printf("Sum of the geometric series: %.2lf\n", sum);

    return 0;
}