#include<stdio.h>

int main(){

    double side, len, width, rad;
    double PIE = 22/7;

    printf("Enter the side of the square: ");
    scanf("%lf", &side);

    printf("Area of the square: %lf\n", side*side);
    printf("Perimeter of the square: %lf\n", 4*side);

    printf("Enter the length & width of the rectangle: ");
    scanf("%lf %lf", &len, &width);

    printf("Area of the rectangle: %lf\n", len*width);
    printf("Perimeter of the rectangle: %lf\n", 2*(len+width));

    printf("Enter the radius of the square: ");
    scanf("%lf", &rad);

    printf("Area of the circle: %lf\n", PIE*rad*rad);
    printf("Circumference of the circle: %lf\n", 2*PIE*rad);
    
    return 0;
}