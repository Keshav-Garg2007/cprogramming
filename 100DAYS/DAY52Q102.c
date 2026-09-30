#include <stdio.h>

int main()
{
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;       // possible ceil index
            high = mid - 1;  // search left for first occurrence
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}