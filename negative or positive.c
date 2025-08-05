#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check the sign of the number
    if (num > 0)
        printf("%d is Positive.\n", num);
    else if (num < 0)
        printf("%d is Negative.\n", num);
    else
        printf("The number is Zero.\n");

    return 0;
}