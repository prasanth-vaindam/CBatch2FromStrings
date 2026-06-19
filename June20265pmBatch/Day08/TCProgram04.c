#include <stdio.h>

int main()
{
    int marks = 445;

    float percentage = (float)marks / 500 * 100;

    printf("Percentage = %.2f%%", percentage);

    return 0;
}