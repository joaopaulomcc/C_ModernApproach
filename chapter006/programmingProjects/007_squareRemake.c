/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 7
- Prints squares of even numbers
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    odd = 3;

    for (i = 1, square = 1; i <= n; odd += 2, i++) {
        printf("%10d%10d\n", i, square);

        square += odd;
    }

    return EXIT_SUCCESS;
}