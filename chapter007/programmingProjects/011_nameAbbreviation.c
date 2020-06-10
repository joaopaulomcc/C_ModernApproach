/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 11
- Writes the first and last names of a person in an abbreviate format.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char first_letter, letter;

    printf("Enter a first and a last name: ");

    letter = getchar();

    // Loops checking each character until a letter is found
    while (letter == ' ') {

        letter = getchar();

    }

    // Saves first letter for later printing
    first_letter = toupper(letter);

    // Loops until the end of the first name is found
    while (letter != ' ') {

        letter = getchar();

    }

    // Loops until the start of the last name is found
    while (letter == ' ') {

        letter = getchar();

    }

    // Starts printing last name until a space is found

    while ((letter != ' ') && (letter != '\n')) {

        printf("%c", letter);
        letter = getchar();

    }

    // Prints the first name abbreviation using the first letter
    printf(", %c.\n", first_letter);

    return EXIT_SUCCESS;

}