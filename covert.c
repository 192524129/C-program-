#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Call the function
    celsius = fahrenheitToCelsius(fahrenheit);

    // Display result
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}