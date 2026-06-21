#include <stdio.h>

int main() {
    int num, square, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    cube = num * num * num;

    printf("\nNumber = %d", num);
    printf("\nSquare = %d", square);
    printf("\nCube   = %d", cube);

    return 0;
}