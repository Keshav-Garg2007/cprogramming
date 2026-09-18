#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[100][100], b[100][100], result[100][100];

    // First matrix
    printf("Enter the order of first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Second matrix
    printf("Enter the order of second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("Resultant matrix:\n");

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}