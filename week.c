#include<stdio.h>

int main(){

    int n;

    printf("Enter a number from 1 to 7 for a day of the week: ");
    scanf("%d", &n);

    if(n == 1){
        printf("MONDAY\n");
    } else if(n == 2){
        printf("TUESDAY\n");
    } else if(n == 3){
        printf("WEDNESDAY\n");
    } else if(n == 4){
        printf("THURSDAY\n");
    } else if(n == 5){
        printf("FRIDAY\n");
    } else if(n == 6){
        printf("SATURDAY\n");
    } else if(n == 7){
        printf("SUNDAY\n");
    } else{
        printf("Invalid number!\n");
    }
    
    return 0;
}