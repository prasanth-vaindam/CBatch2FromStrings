#include<stdio.h>
int main(){
	char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ',
	 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	char greetings2[] = "Hello World!";
	printf("size of greetings : %d\n", sizeof(greetings));
	printf("size of greetings : %d", sizeof(greetings2));
}

