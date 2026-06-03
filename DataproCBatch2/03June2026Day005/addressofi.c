#include<stdio.h>
int main(){
	int i=1;
	
	printf("value of i: %d\n",i);
	printf("address of i: %p\n",&i); // address or reference 0xff
//	int * ptr; // pointer variable
//	int* ptr;
	int *ptr = &i;
	printf("address of i %p\n", ptr); //  0xff
	printf("value of i %d\n",*ptr); // 1
	
	
}
