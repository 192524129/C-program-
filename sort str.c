#include <stdio.h>

void sortString(char *str) {
    char *p1, *p2;
    char temp;

    for(p1 = str; *p1 != '\0'; p1++) {
        for(p2 = p1 + 1; *p2 != '\0'; p2++) {
            if(*p1 > *p2) {
                // Swap characters using pointer
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // Warning: gets() is unsafe

    // Sort the string using pointer
    sortString(str);

    // Print sorted string
    printf("Sorted string: %s\n", str);

    return 0;
}