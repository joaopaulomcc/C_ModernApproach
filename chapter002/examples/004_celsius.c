/*
Converts a Farenheit temperature to Celsius
*/

#include <stdio.h>
#include <stdlib.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{

    float farenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return EXIT_SUCCESS;

}