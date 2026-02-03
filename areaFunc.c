#include<stdio.h>

double circle(double);

double triangle(double, double);

double rectangle(double, double);

double square(double);

int main(){

    double a, b, c, d, e, f;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &a);

    printf("Enter the height of a triangle: ");
    scanf("%lf", &b);

    printf("Enter the base of a triangle: ");
    scanf("%lf", &c);

    printf("Enter the length of a rectangle: ");
    scanf("%lf", &d);
    
    printf("Enter the width of a rectangle: ");
    scanf("%lf", &e);

    printf("Enter the side of a square: ");
    scanf("%lf", &f);

    printf("Area of a circle: %lf\n", circle(a));

    printf("Area of a triangle: %lf\n", triangle(b, c));

    printf("Area of a rectangle: %lf\n", rectangle(d, e));

    printf("Area of a circle square: %lf\n", square(f));

    return 0;
}

double circle(double r){
    return (22/7) * r * r;
}

double triangle(double h, double b){
    return h * b / 2;
}

double rectangle(double l, double w){
    return l * w;
}

double square(double s){
    return s * s;
}