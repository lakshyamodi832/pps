#include<stdio.h>

int main(){

    int st, end;

    printf("Enter start: ");
    scanf("%d", &st);

    printf("Enter end: ");
    scanf("%d", &end);

    int i, j;

    for(i = st; i <= end; i++){
        if(i <= 1){
            continue;
        }
        for(j = 2; j <= i / 2; j++){
            if(i % j == 0){
                break;
            }
        }
        if(j > i / 2){
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}