#include<stdio.h>
int main(){
	int age = 15;
	float price = 99.50;
	char grade = 'A';
	char name[] = "Ravi";
	
	printf("%d\n",age);
	printf("%f\n", price); // 99.500000
	printf("%.2f\n", price); //99.50
	printf("%.0f\n", price); //100
	printf("%c\n",grade);
	printf("%s\n",name);
	return 0;
	
}
