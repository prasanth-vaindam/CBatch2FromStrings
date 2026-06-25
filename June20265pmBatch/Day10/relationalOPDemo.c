#include<stdio.h>
int main(){
	int a = 10, b = 20;
	
	
	printf("%d\n", a>b);     // 0
	printf("%d\n", 10 >= 10);  // 1
	printf("%d\n", 10 <= 10);  // 1
	printf("%d\n", 10 <= 100);  // 1
	printf("%d\n", 20 <= 10); // 0 
	printf("%d\n", 30 == 30); // 1
	printf("%d\n", 40 !=40); // 0
	printf("%d\n", 30 < 40); // 1
	printf("%d\n", 30 > 30); // 0
	printf("%d\n", 30 > 300); // 0
	printf("%d\n", 30 < 300); //1
	printf("%d\n", 30 != 300); //1
	return 0;
}
