#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a multiple of 3 or 5
    if (num % 3 == 0 && num % 5 == 0)
        printf("%d is a multiple of both 3 and 5.\n", num);
    else if (num % 3 == 0)
        printf("%d is a multiple of 3.\n", num);
    else if (num % 5 == 0)
        printf("%d is a multiple of 5.\n", num);
    else
        printf("%d is not a multiple of 3 or 5.\n", num);

    return 0;
}