#include <stdio.h>

int main(){
    int radius ;
    printf("Enter the radius ");
    scanf("%d",&radius);
    float area = 3.14159 * radius * radius;
    printf("The area of the circle is %.2f",area);
    float circumference = 2 * 3.14159 * radius;
    printf("\nThe circumference of the circle is %.2f",circumference);
    return 0;
}