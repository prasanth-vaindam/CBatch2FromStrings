#include<stdio.h>
int main(){
	int numbers[]={1,2,3,4,5,6};
	
	// You can subtract two pointers 
	// that point to elements in the same array 
	// to find out how many elements are between them
	int *start, *end;
	start = &numbers[1]; 
	end = &numbers[5];
	printf("there are %d ",end-start);
}
