/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 5
- Computes the SCRABBLE score of a word
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

    char letter = 'a';
    int sum = 0;

    printf("Enter a word: ");

    while (letter != '\n') {

        letter = toupper(getchar());

        switch (letter) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                sum += 1;
                break;

            case 'D': case 'G':
                sum += 2;
                break;

            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;

            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;

            case 'K':
                sum += 5;
                break;

            case 'J': case 'X':
                sum += 8;
                break;

            case 'Q': case 'Z':
                sum += 10;
                break;

            default:
                sum += 0;
                break;
        }
    }

    printf("Scrabble value: %d\n", sum);

    return EXIT_SUCCESS;
}