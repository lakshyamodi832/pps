#include<stdio.h>

int main(){
 
    int n, m;

    printf("Enter the dimensions of the matrices: ");
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m];

    printf("Enter the elements of first matrix: ");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the elements of second matrix: ");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &b[i][j]);
        }
    }

    int sum[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition: \n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}