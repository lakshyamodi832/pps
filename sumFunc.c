#include<stdio.h>

int add(int a, int b);

int main(){
    
    int c, d;

    printf("Enter first number: ");
    scanf("%d", &c);

    printf("Enter second number: ");
    scanf("%d", &d);

    int sum = add(c, d);

    printf("Sum: %d\n", sum);

    return 0;
}

int add(int a, int b){
    return a + b;
}