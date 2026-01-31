#include<stdio.h>

int main(){
 
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int p;

    printf("Enter the position at which new element is to be inserted: ");
    scanf("%d", &p);

    n++;

    for(int i = n; i >= p; i--){
        a[i] = a[i - 1];
    }

    int e;

    printf("Enter the element to be inserted: ");
    scanf("%d", &e);

    a[p - 1] = e;

    for(int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}