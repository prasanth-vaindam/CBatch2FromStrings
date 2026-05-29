// program, to print the numbers in reverse order till 1
// n = 5 
// 5 4 3 2 1
#include<stdio.h>
int main()
{
	int limit, orginalInput;
	printf("Enter the value of n such that it >=1 : ");
	scanf("%d", &limit);
	orginalInput = limit;
	while(limit > 0)
	{
		printf("%d ", limit); //5 4 3 2 1
		limit--;
	}
}
