#include<stdio.h>

int main(){
 
    char s[100];

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    printf("UPPERCASE: ");

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'a' && s[i] <='z'){
            printf("%c", s[i] - 32);
        } else{
            printf("%c", s[i]);
        }
    }

    printf("lowercase: ");

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            printf("%c", s[i] +32);
        } else{
            printf("%c", s[i]);
        }
    }
    
    return 0;
}