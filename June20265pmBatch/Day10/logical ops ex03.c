#include <stdio.h>

int main()
{
    int salary, creditScore, guarantor;

    printf("Enter Salary: ");
    scanf("%d", &salary);

    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);

    printf("Guarantor Available (1/0): ");
    scanf("%d", &guarantor);

    if ((salary >= 50000 && creditScore >= 750) || guarantor)
        printf("Loan Approved");
    else
        printf("Loan Rejected");

    return 0;
}
