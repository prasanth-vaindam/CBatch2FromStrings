#include <stdio.h>

int main()
{
    int age = 16;
    int marks = 40;

    printf("%d", ! ( !(age >= 18) || (marks >= 50) ) ); // 

    return 0;
}
