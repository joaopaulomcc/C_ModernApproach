/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 6
- Prints squares of even numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main (void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int i = 0;
    while (pow(i, 2) <= number) {

        printf("%d\n", i * i);
        i += 2;

    }

    return EXIT_SUCCESS;
}