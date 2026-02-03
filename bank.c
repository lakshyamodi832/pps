#include<stdio.h>

struct bank{
    long num;
    char name[100];
    double bal;
};

int main(){
    
    int n;

    printf("Enter the number of account holders: ");
    scanf("%d", &n);

    struct bank b[n];

    for(int i = 0; i < n; i++){
        printf("Enter the account number of holder %d: ", i + 1);
        scanf("%ld", &b[i].num);

        while(getchar() != '\n');

        printf("Enter the name of holder %d: ", i + 1);
        fgets(b[i].name, sizeof(b[i].name), stdin);

        printf("Enter the balance of holder %d: ", i + 1);
        scanf("%lf", &b[i].bal);
    }

    for(int i = 0; i < n; i++){
        if(b[i].bal < 5000){
            printf("Balance of account number %ld under the name of %s: %lf\n", b[i].num, b[i].name, b[i].bal);
        }
    }

    return 0;
}