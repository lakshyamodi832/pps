#include<stdio.h>

int main(){
    
    double one, two, three, four, five, avg, perc;

    printf("Enter marks of maths: ");
    scanf("%lf", &one);

    printf("Enter marks of pps: ");
    scanf("%lf", &two);

    printf("Enter marks of oops: ");
    scanf("%lf", &three);

    printf("Enter marks of dsa: ");
    scanf("%lf", &four);

    printf("Enter marks of OS: ");
    scanf("%lf", &five);

    avg = (one + two+ three + four + five)/5;

    perc = ((one + two+ three + four + five)/500)*100;

    printf("Average: %lf\n", avg);

    printf("Percentage: %lf\n", perc);

    return 0;
}