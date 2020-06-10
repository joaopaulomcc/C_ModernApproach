/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 1
- Prints a table of squares
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    short n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%hd", &n);
    printf("Maximum SHORT value: \t\t%d\n", SHRT_MAX);
    printf("Maximum INT value: \t\t%d\n", INT_MAX);
    printf("Maximum LONG value: \t\t%ld\n", LONG_MAX);
    printf("Maximum LONG LONG value: \t%lld\n", LLONG_MAX);

    for (int i = 1; i <= n; i++) {
        printf("%10hd%10hd\n", i, i * i);
    }

    return EXIT_SUCCESS;

}