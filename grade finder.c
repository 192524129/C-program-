#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);

    // Check for valid input
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } else {
        // Determine grade
        if (marks >= 90)
            printf("Grade: A\n");
        else if (marks >= 80)
            printf("Grade: B\n");
        else if (marks >= 70)
            printf("Grade: C\n");
        else if (marks >= 60)
            printf("Grade: D\n");
        else
            printf("Grade: F (Fail)\n");
    }

    return 0;
}