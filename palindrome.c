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

    // Get reversed number using recursion
    reversed = reverseNumber(num, 0);

    // Check if palindrome
    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}