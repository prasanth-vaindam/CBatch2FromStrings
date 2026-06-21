#include<stdio.h>
int main() {
    int a = 5, b = 10;

    printf("a = %d, b = %d\n", a, b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("(a > 0) && (b > 0) : %d\n", (a > 0) && (b > 0));
    printf("(a > 0) || (b < 0) : %d\n", (a > 0) || (b < 0));
    printf("!(a > 0) : %d\n", !(a > 0));

    return 0;
}