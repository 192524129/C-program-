#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline if present
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline if present
    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    // Find end of str1
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null terminator
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}