#include <stdio.h>

int main() {
    int age;

    // Input age
    printf("Enter age: ");
    scanf("%d", &age);

    // Determine the age group
    if (age < 0) {
        printf("Invalid age entered.\n");
    } else if (age <= 12) {
        printf("You are a Child.\n");
    } else if (age <= 19) {
        printf("You are a Teenager.\n");
    } else if (age <= 59) {
        printf("You are an Adult.\n");
    } else {
        printf("You are Old.\n");
    }

    return 0;
}