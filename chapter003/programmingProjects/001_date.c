/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 3, Programming Project 1
- Receives a date in one format and returns the same date in another
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("You entered the date %d%.2d%.2d\n", year, month, day);

    return EXIT_SUCCESS;

}