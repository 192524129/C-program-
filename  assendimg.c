#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Bubble sort to sort characters
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    // Output sorted string
    printf("String in ascending order: %s\n", str);

    return 0;
}