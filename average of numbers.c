#include <stdio.h>

int main() {
    float a, b, c, sum, average;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate sum and average
    sum = a + b + c;
    average = sum / 3;

    // Display the results
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}