#include <stdio.h>

// Function to calculate area of a rectangle
int areaOfRectangle(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth, area;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Call the function
    area = areaOfRectangle(length, breadth);

    // Display the result
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}