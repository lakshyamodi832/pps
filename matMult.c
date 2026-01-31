#include<stdio.h>

int main(){
 
    int n1, m1, n2, m2;

    printf("Enter the dimensions of first matrix: ");
    scanf("%d %d", &n1, &m1);

    printf("Enter the dimensions of second matrix: ");
    scanf("%d %d", &n2, &m2);

    if(m1 != n2){
        printf("Multiplication not possible for given dimensions!\n");
    } else {
        int a[n1][m1], b[n2][m2];
        int prod[n1][m2];
        printf("Enter the elements of first matrix: ");
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m1; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: ");
        for(int i = 0; i < n2; i++){
            for(int j = 0; j < m2; j++){
                scanf("%d", &b[i][j]);
            }
        }
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m2; j++){
                prod[i][j] = 0;
                for(int k = 0; k < m1; k++){
                    prod[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Product of the matrices: \n");
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m2; j++){
                printf("%d ", prod[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}