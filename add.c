#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function
    sum = add(num1, num2);

    // Display the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}