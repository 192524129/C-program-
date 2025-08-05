#include <stdio.h>

// Function to concatenate two strings using pointers
void concatenate(char *str1, char *str2) {
    // Move to the end of str1
    while (*str1 != '\0') {
        str1++;
    }

    // Copy str2 to the end of str1
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

    // Input first string
    printf("Enter the first string: ");
    gets(str1);  // unsafe, use fgets in real code

    // Input second string
    printf("Enter the second string: ");
    gets(str2);

    // Call function to concatenate
    concatenate(str1, str2);

    // Display result
    printf("Concatenated string: %s\n", str1);

    return 0;
}