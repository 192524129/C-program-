#include <stdio.h>

// Function to copy string using pointers
void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';  // Null-terminate destination string
}

int main() {
    char str1[100], str2[100];

    // Input source string
    printf("Enter a string: ");
    gets(str1);  // Unsafe, prefer fgets in practice

    // Call function to copy
    copyString(str1, str2);

    // Output copied string
    printf("Copied string: %s\n", str2);

    return 0;
}