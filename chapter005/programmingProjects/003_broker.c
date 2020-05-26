/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 3
- Calculates brokerage costs
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int number_of_shares;
    float price_per_share, original_commission, value, rival_commission;

    printf("Enter the number of shares: ");
    scanf("%d", &number_of_shares);
    printf("Enter the price of the share: ");
    scanf("%f", &price_per_share);

    // Calculates the commission value for the original broker
    value = number_of_shares * price_per_share;

    if (value < 2500.00f) {
        original_commission = 30.00f + 0.17f * value;

    } else if (value < 6250.00f) {
        original_commission = 56.00f + 0.066f * value;

    } else if (value < 2000.00f) {
        original_commission = 76.00f + 0.034f * value;

    } else if (value < 50000.00f) {
        original_commission = 100.00f + 0.0022f * value;

    } else if (value < 500000.00f) {
        original_commission = 155.00f + 0.0011f * value;

    } else {
        original_commission = 255.00f + 0.0009f * value;
    }

    if (original_commission < 39.00f) {
        original_commission = 30.00f;
    }

    // Calculates the commission value for the rival broker
    if (number_of_shares < 2000) {
        rival_commission = 33.00f + 0.03f * number_of_shares;
    } else {
        rival_commission = 33.00f + 0.02f * number_of_shares;
    }

    printf("Original Commission:\t $%6.2f\n", original_commission);
    printf("Rival Commission:\t $%6.2f\n", rival_commission);

    return EXIT_SUCCESS;

}