#include <stdio.h>

int main() {
    int salary;

    printf("Enter salary: ");
    scanf("%d", &salary);

    salary += 5000;
    printf("After Increment : %d\n", salary);

    salary -= 2000;
    printf("After Tax Deduction : %d\n", salary);

    return 0;
}