#include<stdio.h>
// function does not return anything
void greet(char name[10]){
	printf("Hello %s\n",name);
}

int main(){
	greet("Kusuma");
	greet("Sudheer");
	greet("Shaik Kaja");
}
