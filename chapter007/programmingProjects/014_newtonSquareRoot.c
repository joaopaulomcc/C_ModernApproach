/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 14
- Finds the square root of a positive integer using Newton method
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{
    double x, y, old_aprox;
    size_t i = 0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y = 1.0;
    old_aprox = 0.0;

    while (fabs(y - old_aprox) > 0.00001 * y) {

        old_aprox = y;
        y = (y + (x / y)) / 2.0;
        ++i;
        printf("%.10lf\n", y);
    }

    printf("Square root: %.10lf\n", y);
}