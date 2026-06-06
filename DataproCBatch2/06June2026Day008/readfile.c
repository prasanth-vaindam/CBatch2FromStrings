#include<stdio.h>
int main(){
	FILE *fptr;
	char myString[100];
	fptr = fopen("New.txt", "r");
	while(fgets(myString, 100, fptr)){
	printf("%s",myString);	
	}
	
	fclose(fptr);
}
