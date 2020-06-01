/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 6, Programming Project 1
- Finds the largest number in a seriies entered by the user
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float number;
    float largest = 0.0f;

    for (;;) {

        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0.0f) {
            break;

        } else if (number > largest) {
            largest = number;
        }
    }

    printf("The largest number entered was %f\n", largest);

}