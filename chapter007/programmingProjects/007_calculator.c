/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 7
- Simple fraction calculator, support addition, subtraction, multiplication
  and division.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char operator;
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a operator (+ - * /): ");
    scanf("%d / %d %c %d / %d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator) {

        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;

        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;

        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;

        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;

        default:
            printf("Invalid operator. Supported operators are: + - * /\n");
            return EXIT_FAILURE;

    }

    printf("The sum is %d/%d\a\n", result_num, result_denom);

    return EXIT_SUCCESS;
}
