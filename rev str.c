#include <stdio.h>
#include <string.h>

// Function to reverse string using pointers
void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets is unsafe, use fgets in practice

    // Call function to reverse
    reverseString(str);

    // Output reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}