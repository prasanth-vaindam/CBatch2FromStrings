#include<stdio.h>
int main() {
	int number;
	printf("Enter number:");
	scanf("%d",& number);
	switch(number) {
		case 1: printf("One"); break;
		case 2: printf("Tow"); break;
		case 3: printf("Three"); break;
		case 4: printf("Four"); break;
		case 5: printf("Five"); break;
		default: printf("Other number"); break;
	}
}
