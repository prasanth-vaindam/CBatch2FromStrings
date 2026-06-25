#include <stdio.h>

int main()
{
    int userCorrect, passwordCorrect, accountActive;

    printf("Username Correct (1/0): ");
    scanf("%d", &userCorrect);

    printf("Password Correct (1/0): ");
    scanf("%d", &passwordCorrect);

    printf("Account Active (1/0): ");
    scanf("%d", &accountActive);

    if (userCorrect && passwordCorrect && accountActive)
        printf("Login Successful");
    else
        printf("Login Failed");

    return 0;
}
