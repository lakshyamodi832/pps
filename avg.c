#include<stdio.h>

int main(){

    double num[7];
    int n = 7;

    printf("Enter seven numbers: ");

    for(int i = 0; i < n; i++){
        scanf("%lf", &num[i]);
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += num[i];
    }

    double avg = sum/7;

    printf("Average: %f\n", avg);
    
    return 0;
}