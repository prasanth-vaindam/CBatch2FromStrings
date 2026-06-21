#include <stdio.h>

int main() {
    int days, weeks, remainingDays;

    printf("Enter total days: ");
    scanf("%d", &days);

    weeks = days / 7;
    remainingDays = days % 7;

    printf("Weeks          = %d\n", weeks);
    printf("Remaining Days = %d\n", remainingDays);

    return 0;
}