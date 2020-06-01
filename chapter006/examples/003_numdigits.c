/*
Calculates the number of digits in an integer.
*/

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    int n;
    int digits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s). \n", digits);

    return EXIT_SUCCESS;
}