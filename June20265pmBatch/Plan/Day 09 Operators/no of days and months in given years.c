#include<stdio.h>
int main(){
	float numberOfYears;
	printf("Enter No of Years:");
	scanf("%f", &numberOfYears);
	
	printf("No of days: %.0f\n", numberOfYears*365);
	printf("No of Months: %.0f\n", numberOfYears*12);
	return 0;
}
