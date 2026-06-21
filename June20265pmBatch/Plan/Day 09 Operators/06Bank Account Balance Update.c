#include <stdio.h>

int main() {
    int balance;

    printf("Enter initial balance: ");
    scanf("%d", &balance);

    balance += 500;   // Deposit
    printf("After Deposit : %d\n", balance);

    balance -= 200;   // Withdraw
    printf("After Withdrawal : %d\n", balance);

    return 0;
}