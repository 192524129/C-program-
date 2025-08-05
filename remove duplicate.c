#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int i, j, k = 0;
    int exists;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Remove duplicates
    for (i = 0; str[i] != '\0'; i++) {
        exists = 0;

        // Check if character already exists in result
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                exists = 1;
                break;
            }
        }

        // If not found in result, add it
        if (!exists) {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';  // Null-terminate the result string

    printf("String after removing duplicates: %s\n", result);

    return 0;
}