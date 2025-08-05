#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i;

    // Input sentence from user
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character (ignoring case and spaces)
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != ' ' && ch != '\n') {
            freq[ch]++;
        }
    }

    // Find the first non-repeating character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != ' ' && ch != '\n' && freq[ch] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}