#include <stdio.h>

int main() {
    char sentence[200];
    int i = 0, words = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count words
    while (sentence[i] != '\0') {
        // Check if current character is a space and previous character is not a space
        if ((sentence[i] == ' ' || sentence[i] == '\n') && (i > 0 && sentence[i-1] != ' ')) {
            words++;
        }
        i++;
    }

    // Add one more word if the string doesn't start with space
    if (i > 0 && sentence[0] != ' ' && sentence[0] != '\n') {
        words++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}