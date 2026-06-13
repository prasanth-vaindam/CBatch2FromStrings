#include<stdio.h>
int main(){
	FILE *fptr;
	// fopen(filename, mode)
	/*
	modes:
	w - write
	r - read
	a - append
	r+ - read + write file must be present 
	w+ - Write + read file need not be present
	*/
	fptr = fopen("Welomce.txt","a");
	
	fprintf(fptr, "Namaste and welcome");
	fprintf(fptr, "\nWelcome to the class");
	fclose(fptr);
	
	
}
