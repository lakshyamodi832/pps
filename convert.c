#include<stdio.h>

int main(){
    
    int num, rs, ps;

    printf("Enter total in paisa:" );
    scanf("%d", &num);

    printf("Rupees: %d\n", num/100);
    printf("Paisa: %d\n", num%100);

    return 0;
}