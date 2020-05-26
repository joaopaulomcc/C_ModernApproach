/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 4
- Classifies wind forces in the beaufort scale
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float wind_speed;

    printf("Enter wind speed in knots: ");
    scanf("%f", &wind_speed);

    if (wind_speed < 1) {
        printf("Beufort scale classification: Calm\n");
    } else if (wind_speed < 4) {
        printf("Beufort scale classification: Light air\n");
    } else if (wind_speed < 28) {
        printf("Beufort scale classification: Breeze\n");
    } else if (wind_speed < 48) {
        printf("Beufort scale classification: Gale\n");
    } else if (wind_speed < 64) {
        printf("Beufort scale classification: Storm\n");
    } else {
        printf("Beufort scale classification: Hurricane\n");
    }

    return EXIT_SUCCESS;

}