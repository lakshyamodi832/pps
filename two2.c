#include<stdio.h>

void vowel(char a){
    if(a == 'a'|| a == 'e'|| a == 'i'|| a == 'o'|| a == 'u'){
        printf("%c is a vowel!\n", a);
    } else if(a == 'A'|| a == 'E'|| a == 'I'|| a == 'O'|| a == 'U'){
        printf("%c is a vowel!\n", a);
    } else{
        printf("%c is not a vowel!\n", a);
    }
}

int main(){
    
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    vowel(c);

    return 0;
}