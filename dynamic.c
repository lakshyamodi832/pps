#include<stdio.h>
#include<stdlib.h>

int main(){
 
    int* arr;
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Elements of array: ");

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}