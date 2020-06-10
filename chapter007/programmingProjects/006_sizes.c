/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 6
- Computes the SCRABBLE score of a word
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Size of SHORT:\t\t%zu bytes\n", sizeof(short));
    printf("Size of INT:\t\t%zu bytes\n", sizeof(int));
    printf("Size of LONG:\t\t%zu bytes\n", sizeof(long));
    printf("Size of LONG LONG:\t%zu bytes\n", sizeof(long long));
    printf("Size of FLOAT:\t\t%zu bytes\n", sizeof(float));
    printf("Size of DOUBLE:\t\t%zu bytes\n", sizeof(double));
    printf("Size of LONG DOUBLE:\t%zu bytes\n", sizeof(long double));

    return EXIT_SUCCESS;
}