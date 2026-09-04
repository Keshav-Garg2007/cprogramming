#include <stdio.h>

int main(){
    float c ;
    printf("Enter the value of c: ");
    scanf("%f", &c);
    float f = 9.0/5.0 * c + 32;
    printf("The value of f is: %.2f", f);
    return 0;
}