#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';  // Null-terminate the destination string
}

int main() {
    char str1[100], str2[100];

    // Input the source string
    printf("Enter a string: ");
    gets(str1);  // Warning: unsafe, use fgets in practice

    // Copy string using pointer function
    copyString(str1, str2);

    // Display copied string
    printf("Copied string: %s\n", str2);

    return 0;
}