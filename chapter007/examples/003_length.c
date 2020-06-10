/*
Determines the length of a message
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int len = 0;

    printf("Enter a message: ");

    while (getchar() != '\n') {
        len++;
    }

    printf("Your message was %d characters(s) long.\n", len);

    return EXIT_SUCCESS;

}