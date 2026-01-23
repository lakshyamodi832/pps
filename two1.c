#include<stdio.h>

void two(int a, int b){
    if(a > b){
        printf("%d > %d\n", a, b);
    }else if(a < b){
        printf("%d < %d\n", a, b);
    } else{
        printf("Both are equal!\n");
    }
}

void three(int a, int b, int c){
    if(a > b && a > c){
        printf("%d > %d & %d\n", a, b, c);
    }else if(a < b && c < b){
        printf("%d > %d & %d\n", b, a, c);
    } else if(c > b && a < c){
        printf("%d > %d & %d\n", c, a, b);
    } else{
        printf("All are equal!\n");
    }
}

int main(){
    
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    two(a, b);

    printf("Enter c: ");
    scanf("%d", &c);

    three(a, b, c);

    return 0;
}