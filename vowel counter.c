#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Count vowels using for loop
    for (i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase if needed and check for vowels
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U' || 
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    // Output result
    printf("Number of vowels: %d\n", count);

    return 0;
}