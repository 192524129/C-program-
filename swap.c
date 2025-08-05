#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using temp variable
    temp = a;
    a = b;
    b = temp;

    // Output the result
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}