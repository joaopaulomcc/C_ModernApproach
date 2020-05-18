/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Projects 6
- Calculates the value of the polynomial expression:
    3*x^5 + 2*x^4 - 5*x^3 -  x^2 + 7*x - 6
  using Horner's rule
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{

    float x, poly_value;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    poly_value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("3*x^5 + 2*x^4 - 5*x^3 -  x^2 + 7*x - 6 = %f\n", poly_value);

    return EXIT_SUCCESS;

}