// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Sum: %d\n",a+b);
    printf("Difference: %d\n",a-b);
    printf("Product: %d\n",a*b);
    printf("Quotient: %d\n",a/b);
    return 0;
}