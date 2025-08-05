#include <stdio.h>
#include <ctype.h>  // for ispunct()
#include <string.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    // Input the string
    printf("Enter a string with punctuation: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Copy only non-punctuation characters
    while (str[i] != '\0') {
        if (!ispunct(str[i])) {
            result[j++] = str[i];
        }
        i++;
    }

    result[j] = '\0';  // Null-terminate the result

    printf("String after removing punctuation: %s\n", result);

    return 0;
}