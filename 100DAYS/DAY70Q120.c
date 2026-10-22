#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[500];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Capitalize the first character
    str[0] = toupper(str[0]);

    // Capitalize every character after a space
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}