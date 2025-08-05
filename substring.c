#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int start, length, i;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Input start position and length of substring
    printf("Enter starting position (0-based index): ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    // Validate range
    if (start < 0 || start + length > strlen(str)) {
        printf("Invalid range!\n");
        return 1;
    }

    // Extract substring
    for (i = 0; i < length; i++) {
        substr[i] = str[start + i];
    }
    substr[i] = '\0';  // Null-terminate the substring

    // Print the substring
    printf("Substring: %s\n", substr);

    return 0;
}