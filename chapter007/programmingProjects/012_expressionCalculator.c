/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 7, Programming Project 12
- Simple fraction calculator, support addition, subtraction, multiplication
  and division.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char operator = 'a';
    double result, operand;

    printf("Enter an expression withou spaces: ");
    scanf("%lf", &result);
    operator = getchar();

    while (operator != '\n') {

        scanf("%lf", &operand);

        switch (operator) {

            case '+':
                result += operand;
                break;

            case '-':
                result -= operand;
                break;

            case '*':
                result *= operand;
                break;

            case '/':
                result /= operand;
                break;

            default:
                continue;
        }

        operator = getchar();

    }

    printf("Value of the expression: %.6f\n", result);

    return EXIT_SUCCESS;
}