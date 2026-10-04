#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements: ");

    for (int i = 0; i < n; i++)
    {
        int next = -1;

        // Search for the nearest greater element on the right
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if (i < n - 1)
            printf(", ");
    }

    return 0;
}