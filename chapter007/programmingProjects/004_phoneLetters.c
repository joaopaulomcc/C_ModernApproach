/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 4
- Converts a series of letters into a phone number
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char letter = 'a';

    printf("Enter a phone number: ");

    while (letter != '\n') {

        letter = getchar();

        switch (letter) {
            case 'A': case 'B': case 'C':
                printf("2");
                break;

            case 'D': case 'E': case 'F':
                printf("3");
                break;

            case 'G': case 'H': case 'I':
                printf("4");
                break;

            case 'J': case 'K': case 'L':
                printf("5");
                break;

            case 'M': case 'N': case 'O':
                printf("6");
                break;

            case 'P': case 'R': case 'S':
                printf("7");
                break;

            case 'T': case 'U': case 'V':
                printf("8");
                break;

            case 'W': case 'X': case 'Y':
                printf("9");
                break;

            default:
                printf("%c", letter);
                break;
        }
    }

    return EXIT_SUCCESS;
}