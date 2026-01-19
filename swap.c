#include<stdio.h>

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    printf("With extra variable:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

void _swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Without extra variable:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

int main(){
 
    int a = 2, b = 3;

    swap(a, b);
    _swap(a, b);

    return 0;
}