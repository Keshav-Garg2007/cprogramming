#include <stdio.h>

int main()
{
    enum color {RED, YELLOW, GREEN};

    char *names[] = {"RED", "YELLOW", "GREEN"};

    for(int i = RED; i <= GREEN; i++)
    {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}