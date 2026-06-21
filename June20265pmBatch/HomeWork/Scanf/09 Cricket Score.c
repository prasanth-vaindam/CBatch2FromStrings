#include <stdio.h>

int main()
{
    char player[30];
    int runs;

    printf("Enter Player Name: ");
    scanf("%s", player);

    printf("Enter Runs Scored: ");
    scanf("%d", &runs);

    printf("\n%s scored %d runs.", player, runs);

    return 0;
}