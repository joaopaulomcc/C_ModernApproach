/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 4, Programming Project 2
- Receives a three digit number an returns a number with the digits reversed
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int number, reversed_number, hundreds, tens, units;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number % 100) / 10;
    units = number % 10;

    reversed_number = 100 * units + 10 * tens + hundreds;

    printf("The reversal is: %d\n", reversed_number);

    return EXIT_SUCCESS;

}