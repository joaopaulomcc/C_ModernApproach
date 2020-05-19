/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 3, Programming Project 4
- Receives a telephone number in one format and prints the same number in another format
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Variable declarations
    int first_digits, middle_digits, last_digits;

    // Reads user input
    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first_digits, &middle_digits, &last_digits);

    // Prints data received
    printf("You entered %d.%d.%d\n", first_digits, middle_digits, last_digits);

    return EXIT_SUCCESS;

}