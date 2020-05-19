/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 3, Programming Project 2
- Simulates inputing product data into a database
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Variable declarations
    int item_number, year, month, day;
    float unit_price;

    // Reads user input
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d / %d / %d", &day, &month, &year);

    // Prints data received
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$ %6.2f\t%.2d/%.2d/%.4d\n", item_number, unit_price, day, month, year);

    return EXIT_SUCCESS;

}