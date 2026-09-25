#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}