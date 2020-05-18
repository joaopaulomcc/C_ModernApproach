/*
Computes the dimensional weight of a 12" x 10" x 8" box
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int height = 8;
    int length = 12;
    int width = 10;
    int volume;
    int weight;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimension: %dx%dx%dx\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return EXIT_SUCCESS;

}