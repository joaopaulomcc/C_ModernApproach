/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 5
- Finds the largest number in a seriies entered by the user
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The same number with its digits reversed is: ");

    do {
        printf("%d", number % 10);
        number /= 10;
    } while (number > 0);

    printf("\n");

    return EXIT_SUCCESS;
}