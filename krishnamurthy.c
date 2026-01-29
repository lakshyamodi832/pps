#include<stdio.h>

int main(){

    int n, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0, temp = n;

    while(temp > 0){
        rem = temp % 10;
        int fact = 1;
        for(int i = 2; i <= rem; i++){
            fact = fact * i;
        }
        sum += fact;
        temp /= 10;
    }

    if(sum == n){
        printf("It is a krishnamurthy number!\n");
    } else{
        printf("It is not a krishnamurthy number!\n");
    }
    
    return 0;
}