/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 3, Programming Project 5
- Check if numbers entered by user form a magic square
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Variable declarations
    int a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33;
    int row_sum0, row_sum1, row_sum2, row_sum3;
    int column_sum0, column_sum1, column_sum2, column_sum3;
    int diagonal_sum0, diagonal_sum1;

    // Reads user input
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a00, &a01, &a02, &a03, &a10, &a11, &a12,
          &a13, &a20, &a21, &a22, &a23, &a30, &a31, &a32, &a33);

    // Calculates row, column, and diagonal sums
    row_sum0 = a00 + a01 + a02 + a03;
    row_sum1 = a10 + a11 + a12 + a13;
    row_sum2 = a20 + a21 + a22 + a23;
    row_sum3 = a30 + a31 + a32 + a33;

    column_sum0 = a00 + a10 + a20 + a30;
    column_sum1 = a01 + a11 + a21 + a31;
    column_sum2 = a02 + a12 + a22 + a32;
    column_sum3 = a03 + a13 + a23 + a33;

    diagonal_sum0 = a00 + a11 + a22 + a33;
    diagonal_sum1 = a30 + a21 + a12 + a03;

    // Prints the results
    printf("\n");
    printf("%2d %2d %2d %2d\n", a00, a01, a02, a03);
    printf("%2d %2d %2d %2d\n", a10, a11, a12, a13);
    printf("%2d %2d %2d %2d\n", a20, a21, a22, a23);
    printf("%2d %2d %2d %2d\n", a30, a31, a32, a33);
    printf("\n");
    printf("Row sums: %d %d %d %d\n", row_sum0, row_sum1, row_sum2, row_sum3);
    printf("Column sums: %d %d %d %d\n", column_sum0, column_sum1, column_sum2,
           column_sum3);
    printf("Diagonal sums: %d %d\n", diagonal_sum0, diagonal_sum1);

    return EXIT_SUCCESS;

}