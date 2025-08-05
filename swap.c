#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display before swapping
    printf("\nBefore swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Call swap function
    swap(&num1, &num2);

    // Display after swapping
    printf("\nAfter swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}