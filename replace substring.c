#include <stdio.h>
#include <string.h>

int main() {
    char str[200], oldSub[50], newSub[50], result[300];
    int i = 0, j = 0, k = 0;
    int found;

    // Input the original string
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Input the substring to be replaced
    printf("Enter the substring to replace: ");
    fgets(oldSub, sizeof(oldSub), stdin);
    oldSub[strcspn(oldSub, "\n")] = '\0';

    // Input the new substring
    printf("Enter the new substring: ");
    fgets(newSub, sizeof(newSub), stdin);
    newSub[strcspn(newSub, "\n")] = '\0';

    while (str[i] != '\0') {
        found = 1;

        // Check if oldSub matches at position i
        for (j = 0; oldSub[j] != '\0'; j++) {
            if (str[i + j] != oldSub[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            // Copy newSub to result
            for (j = 0; newSub[j] != '\0'; j++, k++) {
                result[k] = newSub[j];
            }
            i += strlen(oldSub);
        } else {
            // Copy original character
            result[k++] = str[i++];
        }
    }

    result[k] = '\0';  // Null-terminate result

    printf("Modified string: %s\n", result);

    return 0;
}