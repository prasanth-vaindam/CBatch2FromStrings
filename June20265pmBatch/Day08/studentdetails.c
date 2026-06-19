#include<stdio.h>
int main(){
	int age;
	char grade;
	char name[30];
	
	printf("Enter your name:...");
	gets(name);
	printf("Enter your age:...");
	scanf("%d",&age);
	fflush(stdin);
	printf("Enter your grade:...");
	scanf("%c", &grade);
	
	printf("--------------------------\n");
	printf("MY Name is %s\n",name);
	printf("My Age is %d\n",age);
	printf("My Grade is %c\n",grade);
	
}
