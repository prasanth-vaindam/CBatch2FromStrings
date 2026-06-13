#include<stdio.h>
int main(){
	float price = 98.67;
	int number_Of_Items = 10;
	
	float total_price = price * number_Of_Items;
	
	printf("Total Price is %.10f\n",total_price);
	return 0;
}
