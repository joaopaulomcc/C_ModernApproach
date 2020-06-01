/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 3
- Finds the largest number in a seriies entered by the user
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numerator, denominator;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numerator, &denominator);

    int m, n, remainder, gcd;

    m = numerator;
    n = denominator;

    while (n != 0) {

        remainder = m % n;
        m = n;
        n = remainder;

    }

    gcd = m;

    printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

}