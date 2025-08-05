#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char str[], int start, int end) {
    if (start == end) {
        printf("%s\n", str);  // Print one permutation
    } else {
        for (int i = start; i <= end; i++) {
            swap(&str[start], &str[i]);           // Swap current index with start
            permute(str, start + 1, end);          // Recurse for remaining substring
            swap(&str[start], &str[i]);            // Backtrack
        }
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    printf("All permutations of the string:\n");
    permute(str, 0, n - 1);

    return 0;
}