#include <stdio.h>

int main(){
    int a;
    printf("Enter a number a:");
    scanf("%d", &a);
    if( a>0)
    {
    printf("ENTERED NUMBER IS POSITIVE");
    }
    else if(a<0)
    {
        printf("ENTERED NUMBER IS NEGATIVE");
    }
    else
    {
        printf("ENTERED NUMBER IS ZERO");
    
    }
    return 0;
}