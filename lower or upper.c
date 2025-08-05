#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Space before %c to ignore any leftover newline

    // Check if it's an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z')
            printf("The alphabet '%c' is Uppercase.\n", ch);
        else
            printf("The alphabet '%c' is Lowercase.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}