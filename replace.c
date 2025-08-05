#include <stdio.h>

int main() {
    char str[200];
    char oldChar, newChar;
    int i = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Input character to replace and new character
    printf("Enter the letter to replace: ");
    scanf(" %c", &oldChar);  // space before %c to skip newline

    printf("Enter the new letter: ");
    scanf(" %c", &newChar);

    // Replace characters
    while (str[i] != '\0') {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
        i++;
    }

    // Output modified sentence
    printf("Modified sentence: %s", str);

    return 0;
}