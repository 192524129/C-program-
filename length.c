#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop until null character '\0' is found
    while (str[length] != '\0') {
        length++;
    }

    // Subtract 1 if newline character is read by fgets
    if (str[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}