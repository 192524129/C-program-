#include <stdio.h>

// Recursive function to find length of string
int stringLength(char *str) {
    if (*str == '\0')  // Base case: end of string
        return 0;
    else
        return 1 + stringLength(str + 1);  // Recursive call with next character
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // (Note: Use `fgets` in modern code for safety)

    // Calculate length using recursion
    int length = stringLength(str);

    // Display the result
    printf("Length of the string: %d\n", length);

    return 0;
}