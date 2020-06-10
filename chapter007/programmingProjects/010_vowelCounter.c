/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 10
- Counts the number of vowels in a sentence
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char letter = 'a';
    int sum = 0;

    printf("Enter a sentence: ");
    letter = toupper(getchar());

    while (letter != '\n') {

        switch (letter) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                ++sum;
                break;

            default:
                break;
        }

        letter = toupper(getchar());
    }

    printf("Your sentence contains %d vowels.\n", sum);

    return EXIT_SUCCESS;
}