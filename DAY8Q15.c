// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


#include <stdio.h>

int main(){
    char ch;
    printf("ENTER A CHARACTER: \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("THE CHARACTER IS AN UPPERCASE ALPHABET.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("THE CHARACTER IS A LOWERCASE ALPHABET.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("THE CHARACTER IS A DIGIT.\n");
    } else {
        printf("THE CHARACTER IS A SPECIAL CHARACTER.\n");
    }

    return 0;
}