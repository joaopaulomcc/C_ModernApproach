/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 7
- Finds the largest and smallest number of a series of 4
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n0, n1, n2, n3, largest, smallest, large_A, small_A, large_B, small_B;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n0, &n1, &n2, &n3);

    if (n0 >= n1) {
        large_A = n0;
        small_A = n1;

    } else {
        large_A = n1;
        small_A = n0;
    }

    if (n2 >= n3) {
        large_B = n2;
        small_B = n3;

    } else {
        large_B = n3;
        small_B = n2;
    }

    if (large_A >= large_B) {
        largest = large_A;

    } else {
        largest = large_B;
    }

    if (small_A < small_B) {
        smallest = small_A;

    } else {
        smallest = small_B;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return EXIT_SUCCESS;

}