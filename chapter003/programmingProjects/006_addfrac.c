/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 3, Programming Project 6
- Adds two fractions
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plu sign: ");
    scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\a\n", result_num, result_denom);

    return EXIT_SUCCESS;
}