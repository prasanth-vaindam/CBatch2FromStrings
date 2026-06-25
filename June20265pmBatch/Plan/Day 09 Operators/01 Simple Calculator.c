#include <stdio.h>

int main() {
	
	int a,b; // declaring two integer variables
	
	printf("Enter two numbers:");
	scanf("%d%d",&a, &b);
	printf("Addition of %d and %d: %d\n", a,b, a+b);
	printf("Remainder of %d and %d is %d\n",a,b, a%b);
	printf("%d\n", 654%10); // 4
}
