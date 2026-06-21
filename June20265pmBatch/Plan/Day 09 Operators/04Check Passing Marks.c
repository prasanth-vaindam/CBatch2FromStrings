#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Pass: %d\n", marks >= 35);

    return 0;
}