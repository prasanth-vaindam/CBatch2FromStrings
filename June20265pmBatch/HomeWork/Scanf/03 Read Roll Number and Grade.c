#include <stdio.h>

int main()
{
    int rollNo;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Details\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Grade       : %c\n", grade);

    return 0;
}