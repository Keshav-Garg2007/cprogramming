#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int freq[n + 1];

    // Initialize frequency array
    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find repeated element in one iteration
    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] == 1) {
            printf("%d", nums[i]);
            return 0;
        }
        freq[nums[i]] = 1;
    }

    return 0;
}