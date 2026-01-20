#include<stdio.h>

void compare(double a, double b){
    
    double result = a > b ? a * b : a / b;

    if(a > b){
        printf("%lf > %lf\n", a, b);
        printf("%lf * %lf = %lf\n", a, b, result);
    } else if(a < b){
        printf("%lf < %lf\n", a, b);
        printf("%lf / %lf = %lf\n", a, b, result);
    } else{
        printf("%lf = %lf\n", a, b);
    }
}

int main(){
    
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    compare(a, b);

    return 0;
}