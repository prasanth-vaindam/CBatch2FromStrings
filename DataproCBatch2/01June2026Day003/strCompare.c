#include<stdio.h>
int main(){
	char str[]= "Cat";
	char str1[] = "Cat";
	char str2[] = "Bat";
	char str3[] = "Rat";
	char str4[] = "cat";
	
	printf("%d\n",strcmp(str,str1)); 
	printf("%d\n",strcmp(str1,str2));
	printf("%d\n",strcmp(str1,str3));
	printf("%d\n",strcmp(str1,str4));
	return 0;
}
