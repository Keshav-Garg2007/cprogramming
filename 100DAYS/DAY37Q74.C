#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter the order of matrix (rows columns): ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}