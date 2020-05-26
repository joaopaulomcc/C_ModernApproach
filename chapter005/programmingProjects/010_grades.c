/*
- C Programming: A Modern Aproach, 2nd edition, by K. N. King
- Chapter 5, Programming Project 10
- converts a numerical grade into a letter grade
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    int grade, grade_tens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    grade_tens = grade / 10;

    if ((grade < 0) || (grade > 100)) {
        printf("Invalid Grade! Grades should be between 0 and 100.\n");

        return EXIT_SUCCESS;
    }

    switch (grade_tens) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("Letter grade: F\n");
            break;

        case 6:
            printf("Letter grade: D\n");
            break;

        case 7:
            printf("Letter grade: C\n");
            break;

        case 8:
            printf("Letter grade: B\n");
            break;

        case 9: case 10:
            printf("Letter grade: A\n");
            break;

        default:
            printf("Invalid Grade! Grades should be between 0 and 100.\n");
            break;
    }

    return EXIT_SUCCESS;

}