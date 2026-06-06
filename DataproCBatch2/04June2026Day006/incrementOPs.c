#include<stdio.h>
int main(){
	int i=10;
	printf("i: %d\n", i); //10
	i++; // i = i + 1
	printf("i: %d\n", i); // 11
	i+=3; // i = i + 3
	printf("i: %d\n", i); //14
	
	i--; // i = i-1; 13 9
	i--; // 12 8
	printf("%d\n",i);
}
