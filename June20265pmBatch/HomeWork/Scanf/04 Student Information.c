#include <stdio.h>

int main()
{
    char name[30];
    int rollNo;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("\nName : %s\n", name);
    printf("Roll : %d\n", rollNo);

    return 0;
}