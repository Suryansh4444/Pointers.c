#include <stdio.h>

int main(){ 
    int i = 72;
    int* j = &i;
    printf("The address of i is %p\n", &i);
     printf("The address of i is %p\n", j);
    return 0;}