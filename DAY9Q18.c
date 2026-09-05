// Write a program that accecpts a percentage ( 0 - 100) and assigns a grade based on the following criteria:
// 90 - 100: A
// 80 - 89: B
// 70 - 79: C
// 60 - 69: D
// Below 60 : F 

#include <stdio.h>

int main(){
    float percentage;
    int grade;
    printf("Enter the percentage of the student :\n");
    scanf("%f", &percentage);
    if (percentage >=90 && percentage <= 100){
        printf("The grade of the student is A\n");
    }
    else if (percentage >=80 && percentage <= 89){
        printf("The grade of the student is B\n");
    }
    else if (percentage >=70 && percentage <= 79){
        printf("The grade of the student is C\n");
    }
    else if (percentage >=60 && percentage <= 69){
        printf("The grade of the student is D\n");
    }
    else {
        printf("The grade of the student is F\n");
    }
    return 0;
}