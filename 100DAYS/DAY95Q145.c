#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll and marks for student %d: ", i + 1);
        scanf("%49s %d %d",
              students[i].name,
              &students[i].roll,
              &students[i].marks);
    }

    struct Student top = findTopper(students, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}