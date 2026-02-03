#include<stdio.h>

void callByValue(int a);
void callByReference(int *b);

int main(){

    int x = 10, y = 20;

    printf("Before: %d\n", x);
    callByValue(x);
    printf("After: %d\n", x);

    printf("Before: %d\n", y);
    callByReference(&y);
    printf("After: %d\n", y);
    
    return 0;
}

void callByValue(int a){
    a = a + 5;
    printf("Call by value: %d\n", a);
}

void callByReference(int*b){
    *b = *b + 5;
    printf("Call by reference: %d\n", *b);
}