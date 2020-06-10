/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 2
- Prints a table of squares
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    // One getchar to clean stdin
    getchar();

    for (int i = 1; i <= n; i++) {
        printf("%10hd%10hd\n", i, i * i);

        if (i % 24 == 0) {
            printf("Press ENTER to continue ...");

            while (getchar() != '\n') {
                printf("Press ENTER to continue ...");
            }
        }
    }

    return EXIT_SUCCESS;

}