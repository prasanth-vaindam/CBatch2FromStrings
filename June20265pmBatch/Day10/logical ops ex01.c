#include <stdio.h>

int main()
{
    int age, percentage, backlogs;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Percentage: ");
    scanf("%d", &percentage);

    printf("Backlogs (0 = No, 1 = Yes): ");
    scanf("%d", &backlogs);

    if (age >= 18 && percentage >= 60 && backlogs == 0)
        printf("Eligible for Placement");
    else
        printf("Not Eligible");

    return 0;
}
