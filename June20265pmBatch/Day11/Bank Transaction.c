#include<stdio.h>
int main()
{
	int balance; 
	printf("Enter your balance: ");
	scanf("%d", &balance);
	
	// transation 1 
	balance += 500;
	
	printf("Balance after deposit:%d\n",balance);
	
	//transaction 2
	balance -= 300;
	printf("Balance after withdrawl:%d\n",balance);
	return 0;
}
