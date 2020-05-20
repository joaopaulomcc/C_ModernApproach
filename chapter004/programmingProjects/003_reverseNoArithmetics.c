/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 4, Programming Project 3
- Receives a three digit number an returns a number with the digits reversed
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int reversed_number, hundreds, tens, units;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &units);

    reversed_number = 100 * units + 10 * tens + hundreds;

    printf("The reversal is: %d\n", reversed_number);

    return EXIT_SUCCESS;

}