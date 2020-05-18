/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Projects 7
- Calculates how many 20, 10, 5, and 1 dollar bills are necessary to reach a certain
  amount
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{

    int amount, twentys, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    twentys = amount / 20;
    tens = (amount - 20 * twentys) / 10;
    fives = (amount - 20 * twentys - 10 * tens) / 5;
    ones = amount - 20 * twentys - 10 * tens - 5 * fives;

    printf("\n");
    printf("$ 20 bills: %d\n", twentys);
    printf("$ 10 bills: %d\n", tens);
    printf("$  5 bills: %d\n", fives);
    printf("$  1 bills: %d\n", ones);

    return EXIT_SUCCESS;

}
