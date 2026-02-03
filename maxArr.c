#include<stdio.h>

int max(int*, int n);

int main(){

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Maximum: %d\n", max(a, n));
    
    return 0;
}

int max(int* arr, int n){
    int max = *arr;

    for(int i = 1; i < n; i++){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
    }
    return max;
}