#include <stdio.h>

int main() {
    int n, x;
    int leftSum = 0, rightSum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;
        rightSum = n * (n + 1) / 2 - (x - 1) * x / 2;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}