#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, max = 0, result = 0;

    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    // Count frequency of each digit
    if (n == 0) {
        count[0] = 1;
    } else {
        while (n > 0) {
            digit = n % 10;
            count[digit]++;
            n /= 10;
        }
    }

    // Find the most frequent digit
    // In case of a tie, smaller digit is selected
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
