#include <stdio.h>

int main() {
    float temp;

    // Input temperature
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    // Determine the temperature condition
    if (temp < 15)
        printf("It's Cold.\n");
    else if (temp >= 15 && temp <= 30)
        printf("It's Warm.\n");
    else
        printf("It's Hot.\n");

    return 0;
}