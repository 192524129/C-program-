#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For tolower()

// Function to check if a word is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Make comparison case-insensitive
        if (tolower(str[start]) != tolower(str[end])) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Palindrome
}

int main() {
    char word[100];

    // Input word
    printf("Enter a word: ");
    scanf("%s", word);  // Use scanf to input single word

    // Check and display result
    if (isPalindrome(word)) {
        printf("'%s' is a palindrome.\n", word);
    } else {
        printf("'%s' is not a palindrome.\n", word);
    }

    return 0;
}