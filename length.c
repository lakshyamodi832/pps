#include<stdio.h>
#include<string.h>

int main(){
 
    char s[100];

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    int l = 0;

    while(s[l] != '\0' & s[l] != '\n'){
        l++;
    }

    printf("Length of the string: %d\n", l);
    
    return 0;
}