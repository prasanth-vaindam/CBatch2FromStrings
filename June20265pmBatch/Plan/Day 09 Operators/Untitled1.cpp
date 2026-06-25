#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not allowed");
            break;
        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Modulo by zero is not allowed");
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}
