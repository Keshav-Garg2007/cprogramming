#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = 0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials except surname
    printf("Initials: %c.", name[0]);

    for (i = 0; i < lastSpace; i++)
    {
        if (name[i] == ' ' && i + 1 < lastSpace)
            printf("%c.", name[i + 1]);
    }

    // Print surname in full
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}