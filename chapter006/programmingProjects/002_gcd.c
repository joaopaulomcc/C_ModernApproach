/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 2
- Finds the greatest commom divisor of two integers
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, remainder, gcd;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n != 0) {

        remainder = m % n;
        m = n;
        n = remainder;

    }

    gcd = m;

    printf("Greatest common divisor: %d\n", gcd);

}