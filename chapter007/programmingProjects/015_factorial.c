/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 14
- Calculates factorial of a number using various data types
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{
    int n;
    short fac_short = 1;
    int fac_int = 1;
    long fac_long = 1;
    long long fac_longlong = 1;
    float fac_float = 1.0f;
    double fac_double = 1.0;
    long double fac_longdouble = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (size_t i = 1; i <= n; ++i) {

        fac_short *= i;
        fac_int *= i;
        fac_long *= i;
        fac_longlong *= i;
        fac_float *= i;
        fac_double *= i;
        fac_longdouble *= i;
    }

    printf("Factorial SHORT: %hd\n", fac_short);
    printf("Factorial INT: %d\n", fac_int);
    printf("Factorial LONG: %ld\n", fac_long);
    printf("Factorial LONG LONG: %Ld\n", fac_longlong);
    printf("Factorial FLOAT: %f\n", fac_float);
    printf("Factorial DOUBLE: %lf\n", fac_double);
    printf("Factorial LONG DOUBLE: %Lf\n", fac_longdouble);
}