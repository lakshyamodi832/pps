#include<stdio.h>

int main(){
 
    int a =  10;
    int* ptr;

    ptr = &a;

    printf("Value of a: %d\n", a);

    printf("Address of a: %p\n", &a);

    printf("Value of ptr: %p\n", ptr);

    printf("Value at ptr: %d\n", *ptr);
    
    return 0;
}