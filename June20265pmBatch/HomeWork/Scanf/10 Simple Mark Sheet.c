#include <stdio.h>

int main()
{
    int math, science, english;

    printf("Enter marks in Math, Science and English: ");
    scanf("%d %d %d", &math, &science, &english);

    printf("\nMARK SHEET\n");
    printf("Math     : %d\n", math);
    printf("Science  : %d\n", science);
    printf("English  : %d\n", english);

    return 0;
}