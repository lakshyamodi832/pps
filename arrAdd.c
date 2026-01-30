#include<stdio.h>

int main(){
 
    int a[10];

    printf("Enter 10 integers: ");

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for(int i = 0; i < 10; i++){
        sum += a[i];
    }

    printf("Sum: %d\n", sum);
     
    return 0;
}