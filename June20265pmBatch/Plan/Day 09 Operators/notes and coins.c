#include<stdio.h>
int main(){
	int amount;
	printf("Enter the amount: ");
	scanf("%d", &amount);
	
	int notes = amount/10;
	int remaining_coins  = amount%10;
	
	printf("Total Ten Rupee Notes: %d\n",notes);
	printf("Remaining Coins: %d\n", remaining_coins);
	return 0;
}
