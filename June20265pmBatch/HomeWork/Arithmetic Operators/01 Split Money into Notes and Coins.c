#include <stdio.h>

int main() {
    int amount, notes, coins;

    printf("Enter amount: ");
    scanf("%d", &amount);

    notes = amount / 10;
    coins = amount % 10;

    printf("10-Rupee Notes = %d\n", notes);
    printf("Remaining 1-Rupee Coins = %d\n", coins);

    return 0;
}