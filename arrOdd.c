#include<stdio.h>

int main(){

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int odd = 0, even = 0;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    
    printf("Number of odd elements: %d\n", odd);

    printf("Number of even elements: %d\n", even);

    return 0;
}