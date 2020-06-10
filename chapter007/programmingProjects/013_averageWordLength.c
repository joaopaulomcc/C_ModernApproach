/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 13
- Calculates the average length of a word in a sentence
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n_words, n_letters;
    char letter;

    n_words = 0;
    n_letters = 0;

    printf("Enter a sentence: ");

    letter = getchar();

    while (letter != '\n') {

        if (letter == ' ') {

            ++n_words;

        } else {

            ++n_letters;
        }

        letter = getchar();

    }
    // Counts the last word.
    ++n_words;

    printf("Average word length: %.1f\n", (float) n_letters / (float) n_words);
}