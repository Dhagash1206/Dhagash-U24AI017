//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int *ptr = &num;

    int square = (*ptr) * (*ptr);
    int cube = (*ptr) * (*ptr) * (*ptr);

    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}
