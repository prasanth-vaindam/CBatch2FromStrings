#include<stdio.h>
int main(){
	char msg[] = {'H','e','l','l','o','\0'};
	char *ptr;
	ptr = msg; //100
	int i=0;
	for(i=0;i<6;i++)
	{
		printf("%p\n",(void *)(ptr+i));
	}
	
	printf("size of msg is %zu", sizeof(msg)); // 6
	printf("%c address is ==> %p\n",*ptr, (void*)ptr); // H, 100
	
	ptr++;// moves forward by size of char (1 byte) 
	printf("%c address is ==> %p\n",*ptr, (void*)ptr); // l, 101
	
	ptr--;// moves backward by size of char (1 byte) 
	printf("%c address is ==> %p\n",*ptr, (void*)ptr); // e, 100
}
