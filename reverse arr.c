#include <stdio.h>
#include <string.h>

// Recursive function to reverse string
void reverseString(char str[], int start, int end) {
    if (start >= end)
        return;

    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call for the next positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // Warning: gets is unsafe; use fgets in real programs

    int len = strlen(str);

    // Call recursive function
    reverseString(str, 0, len - 1);

    // Output reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}