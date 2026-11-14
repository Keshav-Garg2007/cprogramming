#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n",
           s[topper].name, s[topper].marks);

    return 0;
}