#include <stdio.h>

int main()
{
    char name[30];

    printf("Enter your name: ");
    gets(name); // Note: gets() is unsafe and should be avoided in real applications    

    printf("Hello %s!", name);

    return 0;
}