#include <stdio.h>
int main(){
	int a;
	printf("Enter value of a: ");
	scanf("%d", &a);
	if(a%3==0 && a%5==0){
		printf("%d is divisible by both", a);
	}
	else if(a%3==0){
		printf("%d is divisible by 3", a);
	}
	else if(a%5==0){
		printf("%d is divisible by 5", a);
	}
	else{
		printf("%d is not divisible by anyofthem", a);
	}
}
