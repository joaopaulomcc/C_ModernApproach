/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 9
- Finds the earlier date
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int day_a, day_b, month_a, month_b, year_a, year_b, total_days_a, total_days_b;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%d / %d / %d", &day_a, &month_a, &year_a);

    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%d / %d / %d", &day_b, &month_b, &year_b);

    total_days_a = day_a + month_a * 30 + year_a * 3600;
    total_days_b = day_b + month_b * 30 + year_b * 3600;

    if (total_days_a < total_days_b) {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n",
               day_a, month_a, year_a, day_b, month_b, year_b);

    } else {
        printf("%2d/%2d/%4d is earlier than %2d/%2d/%4d\n",
               day_b, month_b, year_b, day_a, month_a, year_a);

    }

    return EXIT_SUCCESS;

}