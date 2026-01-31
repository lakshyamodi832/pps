#include<stdio.h>

int main(){

    double marks[5][5];

    for(int i = 0; i < 5; i++){
        printf("Enter the marks of student %d: ", i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%lf", &marks[i][j]);
        }
    }

    double sum[5];
    
    for(int i = 0; i < 5; i++){
        sum[i] = 0;
        for(int j = 0; j < 5; j++){
            sum[i] += marks[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        printf("Sum of marks of student %d: %f\n", i + 1, sum[i]);
    }

    int first = 0, second = 1;

    if(sum[second] > sum[first]){
        first = 1;
        second = 0;
    }

    for(int i = 1; i < 5; i++){
        if(sum[i] > sum[first]){
            second = first;
            first = i;
        } else if(sum[i] > sum[second]){
            second = i;
        }
    }

    double highest = sum[first];

    double lowest = sum[second];

    first++;
    second++;

    printf("Student with highest marks of %f: %d\n", highest, first);
    printf("Student with second highest marks of %f: %d\n", lowest, second);

    return 0;
}