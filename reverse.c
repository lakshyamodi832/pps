#include<stdio.h>

int main(){
 
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    double rem;
    int rev = 0;

    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10; 
    }

    printf("Reverse integer: %d\n", rev);

    return 0;
}