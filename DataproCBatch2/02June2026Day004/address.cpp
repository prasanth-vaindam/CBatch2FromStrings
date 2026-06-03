// pointer and arrays
#include<stdio.h>
int main()
{
	int numbers[] = {10,20,30,40};
	int i=0;
	for(i;i<4;i++){
		printf("%d\t", numbers[i]);
		printf("%d\n", *(numbers+i));
	}
	printf("%d", *numbers); //10
	
	
}
