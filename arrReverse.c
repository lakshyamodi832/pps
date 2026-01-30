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

    int b[n];

    for(int i = 0; i < n; i++){
        b[i] = a[n - i - 1];
    }

    printf("Reversed array: ");

    for(int i = 0; i < n; i++){
        printf("%d\n", b[i]);
    }

    return 0;
}