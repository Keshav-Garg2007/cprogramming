#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}