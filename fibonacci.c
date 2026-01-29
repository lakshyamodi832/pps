#include<stdio.h>

int main(){

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int next, t1 = 0, t2 = 1;

    for(int i = 1; i <= n; ++i){
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    printf("\n");
    
    return 0;
}