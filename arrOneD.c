#include<stdio.h>

int main(){
 
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int* ptr;

    ptr = arr;

    printf("Enter elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }

    printf("Elements: ");

    for(int i = 0; i < n; i++){
        printf("%d\n", *(ptr + i));
    }

    return 0;
}