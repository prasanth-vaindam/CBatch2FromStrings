#include<stdio.h>
int main(){
	int numbers[] = {1,2,3,4,5,6};
	int *ptr = numbers;
	printf("%d\n", *ptr); // 
	ptr++;
	printf("%d\n", *ptr); // 
	ptr+=2;
	printf("%d\n",*ptr);  // 
	ptr--;
	printf("%d\n", *ptr); // 
}
