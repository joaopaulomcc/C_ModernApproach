/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 4, Programming Project 5
- Computes a European Article Number Code check digit
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, first_sum, second_sum, total;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i0, &i1, &i2, &i3, &i4, &i5, &i6,
          &i7, &i8, &i9, &i10, &i11);

    first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    second_sum = i0 + i2 + i4 + i6 + i8 + i10;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return EXIT_SUCCESS;
}