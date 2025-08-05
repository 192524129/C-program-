#include <stdio.h>

void concatenate(char *str1, char *str2) {
    // Move pointer to the end of the first string
    while (*str1 != '\0') {
        str1++;
    }

    // Copy second string to the end of the first
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Null-terminate the result
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

    // Input strings
    printf("Enter the first string: ");
    gets(str1);  // Unsafe, but used here for simplicity

    printf("Enter the second string: ");
    gets(str2);

    // Concatenate using pointers
    concatenate(str1, str2);

    // Output result
    printf("Concatenated string: %s\n", str1);

    return 0;
}