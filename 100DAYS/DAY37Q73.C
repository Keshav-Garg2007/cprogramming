#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter the order of matrix (rows columns): ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum[r];

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        sum[i] = 0;

        for (int j = 0; j < c; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (int i = 0; i < r; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
