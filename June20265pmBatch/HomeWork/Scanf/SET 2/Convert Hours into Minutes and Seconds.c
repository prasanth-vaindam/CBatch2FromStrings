#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 60 * 60;

    printf("\nHours   : %d", hours);
    printf("\nMinutes : %d", minutes);
    printf("\nSeconds : %d", seconds);

    return 0;
}