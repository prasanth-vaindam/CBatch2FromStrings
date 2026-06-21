#include <stdio.h>

int main() {
    int years, months, days;

    printf("Enter number of years: ");
    scanf("%d", &years);

    months = years * 12;
    days = years * 365;

    printf("\nYears  : %d", years);
    printf("\nMonths : %d", months);
    printf("\nDays   : %d", days);

    return 0;
}