#include<stdio.h>
int main(){
	float price = 98.67;
	int no_of_items = 10; 
	int discount = 100;
	
	float final_price;
	
	final_price = (price*no_of_items)-discount;
	printf("The Final Price of %d items ",no_of_items);
	printf("after Discount of %d",discount);
	printf(" is %.0f\n",final_price); // 887
	printf(" is %.2f",final_price); // 886.70
	return 0;
}
