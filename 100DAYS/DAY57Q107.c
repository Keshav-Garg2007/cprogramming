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

    printf("Previous Greater Elements: ");

    for (int i = 0; i < n; i++)
    {
        int greater = -1;

        // Search towards the left
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                greater = arr[j];
                break;  // Nearest greater element found
            }
        }

        printf("%d", greater);

        if (i < n - 1)
            printf(", ");
    }

    return 0;
}