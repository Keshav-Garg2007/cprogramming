#include <stdio.h>

int main()
{
    int n, i;
    int nums[100];
    int totalSum = 0, leftSum = 0, rightSum;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++)
    {
        rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d", pivot);

    return 0;
}