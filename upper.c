#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string from user
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s", str);
    return 0;
}