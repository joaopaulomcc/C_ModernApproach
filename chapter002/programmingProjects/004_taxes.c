/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Project 4
- Calculates 5% taxes increase
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float initial_value, final_value;

    printf("Enter an amount: ");
    scanf("%f", &initial_value);

    final_value = initial_value * 1.05f;

    printf("With tax added: $%.2f\n", final_value);

    return EXIT_SUCCESS;

}