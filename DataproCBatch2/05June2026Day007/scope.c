#include<stdio.h>

int n = 1000; //GLOBAL Variable

// funcrtion decleration
int fun();

int main(){
	
	int n1 = 100;
	printf("POEM %d\t%d\n",n,n1);
	fun(); // function call
}

// function defintion
int fun()
{
	int n = 2000; // local variable
	printf("SONG %d\n",n);
}
// poem 1000 100   
// song  2000 
