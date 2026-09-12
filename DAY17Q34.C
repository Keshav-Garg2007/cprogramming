#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1) {
        printf("Prime");
    } else {
        printf("Not prime");
    }

    return 0;
}
