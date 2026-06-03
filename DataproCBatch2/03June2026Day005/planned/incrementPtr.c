#include<stdio.h>
int main(){
	int numbers[]= {10,20,30,40,50};
	int* ptr = numbers;
	printf("%d\n", *ptr);
	ptr++;	
	printf("%d\n", *ptr);
	ptr--;
	printf("%d\n", *ptr);
	ptr +=2;
	printf("%d\n", *ptr); //30
	
}
