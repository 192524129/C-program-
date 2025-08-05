#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);  // Note: gets is unsafe, use fgets in practice

    // Initialize pointer to start of string
    ptr = str;

    // Count characters until null terminator
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    // Print the length
    printf("Length of the string = %d\n", length);

    return 0;
}