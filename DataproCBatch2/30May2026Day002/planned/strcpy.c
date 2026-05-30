#include<string.h>
#include<stdio.h>
int main(){
	
	char source[20] = "Hello World";
	char destination[3];
	strcpy(destination,source);
	printf("%s",destination);
	
	//Note that the size of str2 should be large enough 
	//to store the copied string (20 in our example)
	
}
