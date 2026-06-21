#include <stdio.h>

int main()
{
    char name[30];
    float salary;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\nEmployee : %s\n", name);
    printf("Salary   : %.2f\n", salary);

    return 0;
}