#include<stdio.h>

void Case(char[]);

int main(){

    char arr[100];

    printf("Enter character array: ");
    fgets(arr, sizeof(arr), stdin);

    Case(arr);
    
    return 0;
}

void Case(char s[]){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - 32);
        } else{
            printf("%c", s[i]);
        }
    }
}