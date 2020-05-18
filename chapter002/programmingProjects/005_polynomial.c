/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Projects 5
- Calculates the value of the polynomial expression:
    3*x^5 + 2*x^4 - 5*x^3 -  x^2 + 7*x - 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{

    float x, poly_value;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    poly_value = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) -  pow(x, 2) + 7 * x - 6;

    printf("3*x^5 + 2*x^4 - 5*x^3 -  x^2 + 7*x - 6 = %f\n", poly_value);

    return EXIT_SUCCESS;

}