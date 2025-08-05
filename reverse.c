#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    else
        return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the recursive function
    reversed = reverseNumber(num, 0);

    // Display result
    printf("Reversed number is: %d\n", reversed);

    return 0;
}