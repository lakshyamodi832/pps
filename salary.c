#include<stdio.h>

int main(){
    
    double basic;

    printf("Enter salary: ");
    scanf("%lf", &basic);

    double hra;
    double ta;
    double da = basic/2;
    

    if(basic <= 6000){
        hra = 400;
        ta = 100;
    } else if(basic >= 6001 && basic < 10000){
        hra = 1400;
        ta = 300;
    } else if(basic >= 10000){
        hra = 2400;
        ta = 700;
    } 

    double total = basic + da + hra + ta;

    printf("Total salary: %.2f\n", total);

    return 0;
}