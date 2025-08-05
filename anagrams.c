#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}

int isAnagram(char str1[], char str2[]) {
    int count[256] = {0};  // ASCII character count array
    int i;

    // Convert both strings to lowercase
    toLowerCase(str1);
    toLowerCase(str2);

    // If lengths differ, not anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters from str1
    for (i = 0; str1[i] != '\0'; i++) {
        count[str1[i]]++;
    }

    // Subtract character count using str2
    for (i = 0; str2[i] != '\0'; i++) {
        count[str2[i]]--;
        if (count[str2[i]] < 0)
            return 0;
    }

    return 1;  // If all counts zero, strings are anagrams
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline

    // Check if anagram
    if (isAnagram(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}