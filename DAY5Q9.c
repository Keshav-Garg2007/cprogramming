#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years");
    scanf("%f", &time);
    float simple_interest = (principal * rate * time) / 100;
    printf("The simple interest is: %f", simple_interest);
    float compound_interest = principal * (pow((1 + rate / 100), time) - 1);
    printf("The compound interest is: %f", compound_interest);
    return 0;
}