#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Capitalize first letter of each word
    int newWord = 1;  // Flag to check start of a word

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            newWord = 1;  // Next character could be a new word
        } else if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize first letter
            newWord = 0;
        } else {
            str[i] = tolower(str[i]);  // Optional: make other letters lowercase
        }
        i++;
    }

    // Print the result
    printf("Capitalized sentence: %s", str);

    return 0;
}