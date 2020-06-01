/*
Prints a table of squares using a for statement
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    return EXIT_SUCCESS;
}