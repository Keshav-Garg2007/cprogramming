#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Numbers should be from 0 to n
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    int missingNumber = expectedSum - actualSum;

    printf("Missing number: %d\n", missingNumber);

    return 0;
}