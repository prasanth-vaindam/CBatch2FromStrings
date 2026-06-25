#include <stdio.h>
int main(){
	char grade;
	printf("Enter your grade: ");
	scanf("%c", &grade);
	switch(grade){
		case 'A':
			printf("Excellent");
			break;
		case 'B':
			printf("Good");
			break;
		case 'C':
			printf("Average");
			break;
		case 'd':
			printf("Just pass");
			break;
		case 'e':
			printf("Fail");
			break;
		default:
			printf("Invalid input");
	}
}
