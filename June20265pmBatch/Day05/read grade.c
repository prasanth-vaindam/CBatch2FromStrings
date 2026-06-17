#include<stdio.h>
int main(){
	char grade;
	float price;
	
	
	printf("Enter your grade........\n");
	scanf("%c",&grade);
	printf("Your grade is %c\n",grade);
	
	
	printf("Enter price of the product........\n");
	scanf("%f", &price);
	printf("Price of the product is: %.2f\n",price);
	
	
	return 0;
}
