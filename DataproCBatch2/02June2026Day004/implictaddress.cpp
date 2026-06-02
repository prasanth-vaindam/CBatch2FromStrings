#include<stdio.h>
int main(){
	char name[20];


//The name of an array automatically represents the address of its first element.
printf("%p\n", name);      // Address of first character
printf("%p\n", &name[0]);  // Same address
printf("%p\n", &name);
//So when scanf() needs an address where it can store the string, name already provides that address.
}
