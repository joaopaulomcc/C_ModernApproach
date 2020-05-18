/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Projects 8
- Calculates the remaining balance on a loan after the first, second, and third
  monthly payments
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void)
{

    float amount, anual_interest_rate, monthly_interest_rate, monthly_payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &anual_interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("\n");

    monthly_interest_rate = pow((1.0f + anual_interest_rate / 100.0f), 1.0f / 12.0f)
                            - 1.0f;
    printf("Monthly interest rate: %f%%\n", 100.0f * monthly_interest_rate);
    printf("\n");

    balance = amount * (1.0f + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = balance * (1.0f + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n",balance);

    balance = balance * (1.0f + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance);


    return EXIT_SUCCESS;

}