/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 1
- Returns how may digits a number has
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int number, n_digits;

    printf("Enter a number between 0 and 9999: ");
    scanf("%d", &number);

    if (number <= 9) {
        n_digits = 1;
    } else if (number <= 99) {
        n_digits = 2;
    } else if (number < 999) {
        n_digits = 3;
    } else {
        n_digits = 4;
    }

    printf("The number %d has %d digits.\n", number, n_digits);

    return EXIT_SUCCESS;

}