#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("Welomce.txt", "r");
	char file[100];
	
	while(fgets(file,100,fptr)){
		printf("%s\n",file);	
	}
	
	fclose(fptr);
}
