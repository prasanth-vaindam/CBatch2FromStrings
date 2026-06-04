#include<stdio.h>
int main(){
	int numbers[] = {1,2,3,4,5,6};
	int *ptr=numbers;
	int i=0;
	for(i; i<6;i++)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
}
