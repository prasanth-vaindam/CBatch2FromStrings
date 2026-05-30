#include<stdio.h>
#include<string.h>
int main(){
	char str1[25] = "India ";
	char str2[] = "is my country";

	// Concatenate str2 to str1 (result is stored in str1)
	strcat(str1, str2);

	// Print str1
	printf("%s", str1); // 
}
