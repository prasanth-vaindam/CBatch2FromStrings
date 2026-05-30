#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "Hello";
	printf("length of the string: %zu\n", strlen(str));
	printf("size of the string str: %zu",sizeof(str));
	
	/*
	strlen() -> length of the string
	strcmp() -> two compare two strings
	strcat() ->to add to strings
	strcpy() -> to copy a string
	*/
}
