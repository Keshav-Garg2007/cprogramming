#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int i, j, sum = 0;

    // Step 1: Take order of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Check if matrix is square
    if (rows != cols) {
        printf("Matrix must be square.\n");
        return 0;
    }

    // Step 2: Take matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of main diagonal elements
    for (i = 0; i < rows; i++) {
        sum = sum + a[i][i];
    }

    // Print result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}