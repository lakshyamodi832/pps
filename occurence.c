#include<stdio.h>

int main(){
 
    char s[100];
    
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '\n'){
            s[i] = '\0';
        }
    }

    int l = 1;

     for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '\0' || s[i] == -1) {
            continue;
        }
        for(int j = i + 1; s[j] != '\0'; j++){
            if(s[i] == s[j]){
                l++;
                s[j] = -1;
            }
        }
        printf("%c: %d\n", s[i], l);
        l = 1;
     }
    
    return 0;
}