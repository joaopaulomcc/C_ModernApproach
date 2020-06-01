/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 4
- Finds the largest number in a seriies entered by the user
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float commission, value;

    for (;;) {

        printf("Enter a value of trade: ");
        scanf("%f", &value);

        if (value == 0) {
            break;
        }

        if (value < 2500.00f) {
            commission = 30.00f + 0.17f * value;

        } else if (value < 6250.00f) {
            commission = 56.00f + 0.066f * value;

        } else if (value < 2000.00f) {
            commission = 76.00f + 0.034f * value;

        } else if (value < 50000.00f) {
            commission = 100.00f + 0.0022f * value;

        } else if (value < 500000.00f) {
            commission = 155.00f + 0.0011f * value;

        } else {
            commission = 255.00f + 0.0009f * value;
        }

        if (commission < 39.00f) {
            commission = 30.00f;
        }

        printf("Commission: $%.2f\n\n", commission);

    }

    return EXIT_SUCCESS;
}