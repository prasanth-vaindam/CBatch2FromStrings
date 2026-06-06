#include<stdio.h>

// x, y are parameters 
int sum(int x,int y){
	return x+y;
}

int sub(int x, int y){
	return x-y;
}

double div(int x, int y){
	return (double)x/y;
}

int main()
{
	int a,b;
	printf("Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	
	int result = sum(a,b); // function call and a,b are arguments
	
	printf("The sum of %d and %d is %d\n",a,b, sum(a,b));
	printf("The difference of %d and %d is %d\n",a,b, sub(a,b));
	printf("The divsion of %d and %d is %lf\n",a,b,div(a,b));
		
}


