#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int i, j, symmetric = 1;

    // Step 1: Take order of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // A symmetric matrix must be square
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    // Step 2: Take matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    // Print result
    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
