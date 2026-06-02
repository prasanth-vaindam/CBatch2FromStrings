#include<stdio.h>
int main(){
	char message[] = "Hello";
	int i;
	for(i=0;i<5;i++){
		printf("%c\t%p\n",message[i],&message[i]);	
	}
	
	printf("%p\n", message);
	printf("%p\n", &message);
	printf("%p\n", &message[0]);
}
	
