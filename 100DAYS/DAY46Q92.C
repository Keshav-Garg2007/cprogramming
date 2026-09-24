#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};

    printf("Enter a string: ");
    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No repeating alphabet");

    return 0;
}