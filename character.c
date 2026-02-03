#include<stdio.h>

int main(){
 
    char s[100];
    int l = 0, n, m;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    while(s[l] != '\0' && s[l] != '\n'){
        l++;
    }

    printf("Enter starting point: ");
    scanf("%d", &n);

    printf("Enter number of characters to print: ");
    scanf("%d", &m);

    for(int i = n - 1; i <= n + m - 2; i++){
        printf("%c", s[i]);
    }

    printf("\n");
    
    return 0;
}