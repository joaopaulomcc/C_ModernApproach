/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 4, Programming Project 4
- Converts a number from base 10 (decimal) to base 8 (octal)
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // n0 is the first digit of te converted number, n1 the second and so on.
    int number, n0, n1, n2, n3, n4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    n0 = number % 8;
    n1 = (number / 8) % 8;
    n2 = (number / (8 * 8)) % 8;
    n3 = (number / (8 * 8 * 8)) % 8;
    n4 = (number / (8 * 8 * 8 * 8)) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", n4, n3, n2, n1, n0);

    return EXIT_SUCCESS;

}