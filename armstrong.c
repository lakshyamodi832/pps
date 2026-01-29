#include<stdio.h>
#include<math.h>

int main(){

    int n, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0, temp = n, digits = 0;

    while(temp > 0){
        temp /= 10;
        digits++;
    }

    temp = n;

    while(temp > 0){
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == n){
        printf("It is a armstrong number!\n");
    } else{
        printf("It is not a armstrong number!\n");
    }
    
    return 0;
}