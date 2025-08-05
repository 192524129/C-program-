#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Copy only non-space characters
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
        i++;
    }

    result[j] = '\0';  // Null-terminate the result

    // Output the modified string
    printf("String after removing spaces: %s\n", result);

    return 0;
}