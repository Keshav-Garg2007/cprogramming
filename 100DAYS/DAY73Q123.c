#include <stdio.h>

int main() {
    FILE *file;
    char ch, prev = ' ';
    int characters = 0, words = 0, lines = 0;

    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch != ' ' && ch != '\n' && (prev == ' ' || prev == '\n'))
            words++;

        prev = ch;
    }

    if (characters > 0 && prev != '\n')
        lines++;

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}gi