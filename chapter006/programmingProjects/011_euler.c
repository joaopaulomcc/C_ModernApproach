/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 11
- Approximates euler constant
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n;
    float factorial;
    float euler_aprox = 1;

    printf("Enter number of terms for the euler series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {

        factorial = 1;

        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }

        euler_aprox += 1.0f / factorial;
    }

    printf("Euler approximation: %.10f\n", euler_aprox);
    return EXIT_SUCCESS;

}