#include<stdio.h>

void temperature(double f){
    double c = ((f-32)*5)/9;

    printf("%lfF = %lfC", f, c);
}

int main(){
    
    double f;

    printf("Enter the temperature in Farenheit: ");
    scanf("%lf", &f);

    temperature(f);

    return 0;
}