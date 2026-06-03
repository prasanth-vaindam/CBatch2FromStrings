#include<stdio.h>
int main(){
    int numbers[]= {10,20,30,40,50};
    int *ptr;
    ptr = numbers;
    *ptr = 11;
    *(ptr+1) = 22;
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}
