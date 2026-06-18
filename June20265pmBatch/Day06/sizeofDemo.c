#include<stdio.h>
int main(){
	int age = 20;
	char grade = 'A';
	char name[] = "Ravi";
	float percentage = 88.7;
	printf("Size of int age is %zu bytes\n",sizeof(age));
	printf("Size of (Char)grade is %zu byte\n",sizeof(grade));
	printf("Size of name is %zu bytes\n",sizeof(name));
	printf("Size of float percentage is %zu bytes\n",sizeof(percentage));
	printf("Size of double is %zu\n",sizeof(double));
	return 0;
}
