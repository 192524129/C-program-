#include <stdio.h>

int main() {
    float c, f;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    // Convert Celsius to Fahrenheit
    f = (c * 1.8) + 32;

    // Output Fahrenheit value
    printf("Fahrenheit: %.2f\n", f);

    return 0;
}