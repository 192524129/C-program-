#include <stdio.h>
#include <ctype.h>  // for tolower()

// Function to count vowels in a string
int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // make case-insensitive
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    int vowels;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input method

    // Call function to count vowels
    vowels = countVowels(str);

    // Display result
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}