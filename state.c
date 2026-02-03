#include<stdio.h>

struct state{
    char name[100];
    int num;
    long pop;
};

int main(){

    struct state s1;

    printf("Enter the name of the state: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter the number of districts: ");
    scanf("%d", &s1.num);

    printf("Enter population: ");
    scanf("%ld", &s1.pop);

    printf("Name: %s", s1.name);

    printf("Number of districts: %d\n", s1.num);

    printf("Population: %ld\n", s1.pop);
    
    return 0;
}