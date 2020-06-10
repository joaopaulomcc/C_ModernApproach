/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 9
- Converts a 12-hour time to 24-hour format
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int hour_12, minutes_12, hour_24;
    char am_pm;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hour_12, &minutes_12, &am_pm);

    am_pm = toupper(am_pm);

    switch (am_pm) {
        case 'A':
            hour_24 = hour_12;
            break;

        case 'P':
            hour_24 = hour_12 + 12;
            break;

        default:
            printf("ERROR: Invalid Input");
            return EXIT_FAILURE;
    }

    printf("Equivalente 24-hour time: %.2d:%.2d\n", hour_24, minutes_12);

    return EXIT_SUCCESS;
}