#include <stdio.h>

int main() {
    int n, i;

    // Input the number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    // Print multiplication table using for loop
    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}