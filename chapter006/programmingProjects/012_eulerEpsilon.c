/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 12
- Approximates euler constant
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{
    float epsilon, max_epsilon, factorial;
    float euler_aprox = 1;

    printf("Enter max epsilon: ");
    scanf("%f", &max_epsilon);

    int i = 1;
    epsilon = INFINITY;

    while (epsilon >= max_epsilon) {

        factorial = 1;

        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        epsilon = 1.0f / factorial;
        euler_aprox += epsilon;
        ++i;
    }

    printf("Euler approximation: %.10f\n", euler_aprox);
    return EXIT_SUCCESS;

}