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

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++)   {
            if(a[i] == a[j]){
                for(int k = j; k < n; k++){
                    a[k] = a[k+1];
                }
                j--;
                n--;
            }
        }
    }

    printf("Array without duplicates: ");

    for(int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
    
    return 0;
}