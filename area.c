#include <stdio.h>

int main() {
    float length, breadth, area;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area
    area = length * breadth;

    // Output the area
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}