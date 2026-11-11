#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[10];

    printf("Enter Gender (MALE/FEMALE): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else {
        printf("Invalid gender");
        return 0;
    }

    if (p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}