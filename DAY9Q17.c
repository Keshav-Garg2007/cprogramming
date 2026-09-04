// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, discriminant, root1, root2;
    printf("ENTER COEFFICIENTS a, b AND c: \n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("THE EQUATION HAS TWO DISTINCT REAL ROOTS: %.2f AND %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("THE EQUATION HAS ONE REAL ROOT: %.2f\n", root1);
    } else {
        printf("THE EQUATION HAS NO REAL ROOTS.\n");
    }
    return 0;
}