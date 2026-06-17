#include<stdio.h>
int main(){
	char grade = 'A';
	int age = 20;
	float price = 98.99;
	double pi = 3.145696509;
	char name[] = "Ravi";
	
	printf("Sizeof(char) is: %d\n",sizeof(grade));
	printf("Sizeof(int) is: %d\n",sizeof(age));
	printf("Sizeof(float) is: %d\n",sizeof(price));
	printf("Sizeof(double) is: %d\n",sizeof(pi));
	printf("Sizeof(name) Ravi is: %d\n",sizeof(name));
	
	return 0;
}
