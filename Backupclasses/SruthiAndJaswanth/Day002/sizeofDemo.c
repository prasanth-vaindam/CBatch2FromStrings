#include<stdio.h>
int main(){
	int age = 15;
	float price = 99.50;
	double final_price = 9078908798.99;
	char grade = 'A';
	char name[] = "Ravi";
	
	printf("size of int %d bytes\n",sizeof(age));
	printf("size of float %zu bytes\n", sizeof(price));
	printf("size of double %zu bytes\n", sizeof(final_price));
	printf("size of character %zu bytes\n",sizeof(grade));
	printf("size of string Ravi %zu bytes\n",sizeof(name));
	return 0;	
}
