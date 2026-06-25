#include<stdio.h>
int main(){
	int totaldays;
	printf("Enter No of Days: ");
	scanf("%d",&totaldays);
	
	int weeks = totaldays / 7;
	int remaingdays = totaldays % 7;
	
	printf("Total Weeks: %d\n",weeks);
	printf("And the Remaining days:%d\n",remaingdays);
	return 0;
	
}
