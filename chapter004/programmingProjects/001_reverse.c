/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 4, Programming Project 1
- Receives a two digit number an returns aits digits reversed
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int number, reversed_number, tens, units;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    tens = number / 10;
    units = number % 10;

    reversed_number = 10 * units + tens;

    printf("The reversal is: %d\n", reversed_number);

    return EXIT_SUCCESS;

}