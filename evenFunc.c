#include<stdio.h>

void even_odd(int n);

int main(){

    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    even_odd(a);
    
    return 0;
}

void even_odd(int n){
    if(n % 2 == 0){
        printf("Number is even!\n");
    } else{
        printf("Number is odd!\n");
    }
}