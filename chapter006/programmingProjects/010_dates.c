/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 10
- Finds the earliest date
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int main(void)
{
    int total_days, total_days_earliest;
    int day, month, year, earliest_day, earliest_month, earliest_year;

    total_days_earliest = INT_MAX;

    while (true) {

        printf("Enter a date (dd/mm/yyyy): ");
        scanf("%d / %d / %d", &day, &month, &year);

        if (day == 0) {
            break;
        }

        total_days = day + month * 30 + year * 3600;

        if (total_days < total_days_earliest) {
            earliest_day = day;
            earliest_month = month;
            earliest_year = year;
            total_days_earliest = total_days;
        }
    }

    printf("%2.2d/%2.2d/%4d is earliest day\n", earliest_day, earliest_month, earliest_year);

    return EXIT_SUCCESS;

}