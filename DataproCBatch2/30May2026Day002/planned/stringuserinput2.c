#include<stdio.h>
int main(){
	// to read complete string use fgets()
	char fullName[30];
	printf("Enter name: ");
	fgets(fullName,sizeof(fullName), stdin);
	printf("Hello %s",fullName);
	
	
	
	
	// include the following arguments: the name of the string variable,
	// sizeof(string_name), and stdin
	
}
