#include<stdio.h>

void sI(double p, double r, double t){
    double si = (p * r * t)/100;

    printf("S.I: %lf", si);
}

int main(){
    
    double p, r, t;

    printf("Enter principle: ");
    scanf("%lf", &p);

    printf("Enter rate of interest(perc.): ");
    scanf("%lf", &r);

    printf("Enter time in years: ");
    scanf("%lf", &t);

    sI(p, r, t);

    return 0;
}