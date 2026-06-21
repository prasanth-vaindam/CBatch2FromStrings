#include <stdio.h>

int main()
{
    char product[30];
    float price;

    printf("Enter Product Name: ");
    scanf("%s", product);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("\nProduct : %s\n", product);
    printf("Price   : %.2f\n", price);

    return 0;
}