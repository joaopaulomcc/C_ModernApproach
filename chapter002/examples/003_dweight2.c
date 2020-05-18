/*
Computes the dimensional weight of a 12" x 10" x 8" box
from input provided by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimension: %dx%dx%dx\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return EXIT_SUCCESS;

}