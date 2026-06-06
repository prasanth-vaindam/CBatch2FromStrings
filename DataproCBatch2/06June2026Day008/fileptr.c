#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("New.txt", "a");
	fprintf(fptr, "\nHello");
	fclose(fptr);
}
