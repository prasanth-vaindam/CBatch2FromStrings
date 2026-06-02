#include<stdio.h>
int main(){
	char name[100];
	printf("enter your full name");
	//scanf("%s",name);
	fgets(name,sizeof(name),stdin);
	printf("Hello %s",name);
}
