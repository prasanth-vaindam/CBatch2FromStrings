#include<stdio.h>
int main(){
	int numbers[] = {10,20,30,40,50};
	int *ptr;
	ptr = numbers;
	int i=0;
	for(i;i<5;i++){
		printf("%p\n",(void *)(ptr+i));
	}
	
	printf("Size of the array numbers id %zu\n", sizeof(numbers));
	
	printf("%d\n", *ptr); // 10
	// increment and decrement
	ptr++; // moves by sizeof int i.e, 4 bytes
	printf("--->%p\n",(void *)ptr); //
	printf("%d\n", *ptr); // 20
	
	printf("%p",(void *) ptr);
	
	ptr += 3;
	printf("--->%p\n",(void *)ptr); //
	printf("%d\n", *ptr); // 40
	
	ptr--;
	printf("%d\n", *ptr); // 20 | 

}
