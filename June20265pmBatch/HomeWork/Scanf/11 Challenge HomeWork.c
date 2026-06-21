#include <stdio.h>

int main() {
    char name[50];
    int rollNumber;
    int age;
    char grade;
    char favoriteSubject[50];

    // Input
    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("Enter Favorite Subject: ");
    scanf(" %[^\n]", favoriteSubject);

    // Output
    printf("\n=====================================\n");
    printf("         STUDENT PROFILE\n");
    printf("=====================================\n");
    printf("Name             : %s\n", name);
    printf("Roll Number      : %d\n", rollNumber);
    printf("Age              : %d\n", age);
    printf("Grade            : %c\n", grade);
    printf("Favorite Subject : %s\n", favoriteSubject);
    printf("=====================================\n");

    return 0;
}