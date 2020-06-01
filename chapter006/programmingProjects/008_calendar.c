/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 8
- Prints squares of even numbers
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n_days, start_day;
    int day_week = 1;

    printf("Enter number of days in month: ");
    scanf("%d", &n_days);

    printf("Enter starting day of the week (1=Sun, ..., 7=Sat): ");
    scanf("%d", &start_day);

    for(int i = 1; i < start_day; ++i) {
        printf("   ");
    }

    day_week = start_day;

    for(int i = 1; i <= n_days; ++i) {
        printf("%3d", i);

        if (day_week == 7) {
            day_week = 1;
            printf("\n");

        } else {
            ++day_week;
        }
    }

    printf("\n");

    return EXIT_SUCCESS;
}