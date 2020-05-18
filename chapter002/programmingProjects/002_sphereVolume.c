/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 2, Programming Projects 2 and 3
- Calculates the volume of a sphere
*/

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

#define PI 3.14159f

int main(void)
{

    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * PI * pow(radius, 3.0f);
    printf("The volume of this sphere is: %.4f\n", volume);

    return EXIT_SUCCESS;

}