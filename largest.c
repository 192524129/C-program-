#include <stdio.h>

// Function to find the largest of two numbers
int findLargest(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, largest;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function
    largest = findLargest(num1, num2);

    // Display result
    printf("The largest number is: %d\n", largest);

    return 0;
}