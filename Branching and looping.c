#include <stdio.h>

int main(void) {

    float start, end, increment, fahrenheit, celsius;

    // Input the starting, ending, and increment values from the user
    printf("Enter the starting Fahrenheit value: ");
    scanf("%f", &start);

    printf("Enter the ending Fahrenheit value: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    fahrenheit = start;

    // Loop through the Fahrenheit values using the increment value
    while (fahrenheit <= end) {

        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%6.2f degrees F = %6.2f degrees C\n", fahrenheit, celsius);

        fahrenheit = fahrenheit + increment;
    }

    return 0;
}

