#include<stdio.h>

double perc(double[]);

int main(){

    double arr[5];

    printf("Enter the marks of five subjects: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%lf", &arr[i]);
    }

    printf("Percentage: %lf\n", perc(arr));

    return 0;
}

double perc(double a[5]){
    double sum = 0;
    for(int i = 0; i < 5; i++){
        sum += a[i];
    }
    return sum / 5;
}