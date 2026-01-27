#include<stdio.h>

int main(){

    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    char c;

    printf("Enter operation(+, -, *, /): ");
    scanf(" %c", &c);

    if(c == '+'){
        printf("Sum: %d\n", a + b);
    } else if(c == '-'){
        printf("Difference: %d\n", a - b);
    } else if(c == '*'){
        printf("Product: %d\n", a * b);
    } else if(c == '/'){
        printf("Division: %f\n", (float)a / b);
    }
    
    return 0;
}