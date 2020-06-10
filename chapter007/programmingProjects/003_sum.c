/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 3
- Sums a series of numbers
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double n;
    double sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %f\n\n", sum);

    printf("Size of FLOAT: %zu\n",sizeof(float));
    printf("Size of DOUBLE: %zu\n",sizeof(double));
    printf("Size of LONG DOUBLE: %zu\n",sizeof(long double));
    return EXIT_SUCCESS;
}