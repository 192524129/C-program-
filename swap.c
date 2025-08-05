#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    // Display before swap
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Call swap function
    swap(&x, &y);

    // Display after swap
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}