#include<stdio.h>

int main(){
 
    char s[100];
    int l = 0;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    while(s[l] != '\0' && s[l] != '\n'){
        l++;
    }

    char _s[l];

    for(int i = 0; i < l; i++){
        _s[l - i - 1] = s[i];
    }

    printf("%s\n", _s);
    
    return 0;
}