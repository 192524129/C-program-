#include <stdio.h>
#include <string.h>

// Recursive function to generate combinations
void combine(char *str, char *output, int start, int end, int index) {
    for (int i = start; i <= end; i++) {
        output[index] = str[i];
        output[index + 1] = '\0';  // Null-terminate string
        printf("%s\n", output);    // Print current combination
        combine(str, output, i + 1, end, index + 1);  // Recurse
    }
}

int main() {
    char str[100];
    char output[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    printf("All combinations of the string:\n");
    combine(str, output, 0, strlen(str) - 1, 0);

    return 0;
}