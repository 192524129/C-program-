#include <stdio.h>
#include <string.h>

// Function to sort characters of a string
void sortString(char str[]) {
    int i, j;
    char temp;

    int len = strlen(str);
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
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // Use scanf for single word

    // Call the sort function
    sortString(str);

    // Display sorted string
    printf("Sorted string: %s\n", str);

    return 0;
}