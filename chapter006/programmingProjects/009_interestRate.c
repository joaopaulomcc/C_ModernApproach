/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Projects 9
- Calculates the remaining balance on a loan after the first, second, and third
  monthly payments
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{

    int n_payments;
    float amount, anual_interest_rate, monthly_interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &anual_interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &n_payments);

    printf("\n");


    monthly_interest_rate = pow((1.0f + anual_interest_rate / 100.0f), 1.0f / 12.0f)
                            - 1.0f;
    printf("Monthly interest rate: %f%%\n", 100.0f * monthly_interest_rate);
    printf("\n");

    balance = amount;

    for (int i = 0; i < n_payments; ++i) {
        balance = balance * (1.0f + monthly_interest_rate) - monthly_payment;
        printf("Balance remaining after payment number %d: $%.2f\n", i+1, balance);
    }

    return EXIT_SUCCESS;

}