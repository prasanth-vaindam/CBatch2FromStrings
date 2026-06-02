#include<stdio.h>
int main(){
	// When a variable is created in C, a memory address is assigned to the variable.
	// The memory address is the location of where the variable is stored on the computer.
	int myAge = 43;
	printf("%p", &myAge); 
	// You should also note that &myAge is often called a "pointer". 
	// A pointer basically stores the memory address of a variable as its value. 
	// To print pointer values, we use the %p format specifier.
	// Why are pointers important in C?
	// They allow manipulation of data directly in memory
}

