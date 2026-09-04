// q1 Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);

    return 0;
}