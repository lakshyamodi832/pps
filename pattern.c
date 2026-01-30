#include<stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            if(i % 2 != 0){
                printf("%d ", j);
            } else{
                printf("%c ", j + 96);
            }
        }
        printf("\n");
    }

    for(int i = 1; i <= 5; i++){
        for(int j = 6 - i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
        for(int k = 1; k <= i; k++){
            printf(" ");
        }
    }
    printf("\n");

    for(int i = 1; i <= 5; i++){
        for(int k = 5 - i; k >= 1; k--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%c", j + 64);
        }
        printf("\n");
    }

    // for(int i = 1; i <= 4; i++){

    // }

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            if((i + j) % 2 == 0){
                printf("1 ");
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}