/*inside main
declare a integer value named marks
read marks obtained from user using scanf
declare a integer variable for total marks and assign it a value of 500
calculate percentage with the formula (marks/total_marks)*100
print the percentage value with correct format specifier
*/
#include<stdio.h>
int main(){
	int marks = 0;
	printf("Enter marks obtained in 10th standard:...");
	scanf("%d",&marks);
	printf("marks: %d\n", marks);
	int total_marks = 500;
	float percentage = (float)marks/total_marks*100;
	printf("Your Percentage is %.2f\n", percentage);
	return 0;
}


