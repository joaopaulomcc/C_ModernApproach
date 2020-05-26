/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 2
- Converts a time in 24 hour form into 12 hour form
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int hours, minutes, conv_hours;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d : %d", &hours, &minutes);

    if (hours < 12) {
        conv_hours = hours;
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", conv_hours, minutes);
    } else if (hours == 12) {
        conv_hours = hours;
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", conv_hours, minutes);
    } else {
        conv_hours = hours - 12;
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", conv_hours, minutes);
    }

    return EXIT_SUCCESS;

}