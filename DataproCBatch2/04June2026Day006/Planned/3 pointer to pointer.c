#include<stdio.h>
int main(){
	int num = 100;
	int *ptr = &num;
	int **pptr = &ptr;
	
	printf("%d\n", num);
	printf("%d\n", *ptr);
	printf("%d\n",**pptr);
	printf("%p\n", &num);
	printf("%p\n",ptr);
	printf("%p\n", *pptr);
	printf("")
}
