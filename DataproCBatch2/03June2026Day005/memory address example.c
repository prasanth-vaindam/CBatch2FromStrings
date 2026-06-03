#include<stdio.h>
int main(){
    int myNumbers[4] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%p\n", &myNumbers[i]);
}
// Note that the last number of each of the elements'
// memory address is different, with an addition of 4.
}