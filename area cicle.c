#include <stdio.h>
#define PI 3.14159

// Function to calculate area of circle
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call the function
    area = areaOfCircle(radius);

    // Display the area
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}