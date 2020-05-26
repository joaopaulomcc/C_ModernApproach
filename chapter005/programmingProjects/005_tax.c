/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 5
- Calculates income tax
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float income, tax, real_tax_rate;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income < 750.0f) {
        tax = income * 0.01f;

    } else if (income < 2250.0f) {
        tax = 7.50f + (income - 750.0f) * 0.02f;

    } else if (income < 3750.0f) {
        tax = 37.50f + (income - 2250.0f) * 0.03f;

    } else if (income < 5250.0f) {
        tax = 82.5f + (income - 3750.0f) * 0.04f;

    } else if (income < 7000.0f) {
        tax = 142.5f + (income - 5250.0f) * 0.05f;

    } else {
        tax = 230.0f + (income - 7000.0f) * 0.06f;

    }

    real_tax_rate = (tax / income) * 100.0f;

    printf("The tax due is US$%.2f, %.1f%% of total income.\n", tax, real_tax_rate);

    return EXIT_SUCCESS;

}