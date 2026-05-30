#include<stdio.h>
#include<string.h>
int main(){
	char str1[] = "Aat";
	char str2[] = "Bat";
	char str3[] = "Cat";
	char str4[] = "Bat";


	printf("%d\n", strcmp(str2, str4));  // Returns 0 (the strings are equal)
    printf("%d\n", strcmp(str1, str2));  // -1 str1 is smaller
	printf("%d\n", strcmp(str3, str2));  // +1 str3 is greater
	
}
