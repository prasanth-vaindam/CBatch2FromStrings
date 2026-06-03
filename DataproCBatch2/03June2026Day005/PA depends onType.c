#include<stdio.h>
int main(){
	int numbers[]={10,20,30,40};
	int *iptr = numbers;
	char message[] = "Hello";
	char *cptr = message;
	
	printf("%p\n", (void*)iptr);
	printf("%p\n", (void*)(iptr+1));//moves by 4 bytes
	// "Treat this address as a generic pointer."
	//According to the C standard, the argument corresponding to %p should be a void *
	printf("%p\n", (void*)cptr);
	printf("%p\n", (void*)(cptr+1));//moves by 1 byte
	
}
