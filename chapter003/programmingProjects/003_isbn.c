/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 3, Programming Project 3
- Breaks down an ISBN number
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Variable declarations
    int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;

    // Reads user input
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code,
          &item_number, &check_digit);

    // Prints data received
    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return EXIT_SUCCESS;

}