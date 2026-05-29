#include<stdio.h>

int main()
{
	int i=0;
	// string demo
	char greeting[] = "Hello";
	//	printf("%d", sizeof(greeting));
	//	printf("%s",greeting);
	// using loop:
	for(i=0; i<sizeof(greeting)-1;i ++)
	{
		printf("%c\n",greeting[i]);
	}
	greeting[0] = 'Y'; // string (char array ) is mutable 
	printf("%s",greeting);
	
	
}
