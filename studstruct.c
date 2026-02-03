#include<stdio.h>

struct student{
    long roll;
    char name[100];
};

int main(){
  
    struct student s[5];

    for(int i = 0; i < 5; i++){
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%ld", &s[i].roll);

        while(getchar() != '\n');

        printf("Enter the name of student %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
    }

    for(int i = 0; i < 5; i++){
        printf("Roll number of student %d: %ld\n", i + 1, s[i].roll);
        printf("Name of student %d: %s", i + 1, s[i].name);
    }

    return 0;
}