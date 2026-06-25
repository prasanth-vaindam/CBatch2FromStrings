#include <stdio.h>

int main()
{
    int attendance, feesPaid, debarred;

    printf("Attendance: ");
    scanf("%d", &attendance);

    printf("Fees Paid (1/0): ");
    scanf("%d", &feesPaid);

    printf("Debarred (1/0): ");
    scanf("%d", &debarred);

    if (attendance >= 75 && feesPaid && !debarred)
        printf("Eligible for Online Exam");
    else
        printf("Not Eligible");

    return 0;
}
