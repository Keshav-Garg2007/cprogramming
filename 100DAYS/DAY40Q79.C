#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];

    // Step 1: Input order
    printf("Enter the order of matrix (rows columns): ");
    scanf("%d %d", &rows, &cols);

    // Step 2: Input matrix
    printf("Enter the matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Traverse all diagonals
    for (int d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            // Bottom to top
            int i = (d < rows) ? d : rows - 1;
            int j = d - i;

            while (i >= 0 && j < cols) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else {
            // Top to bottom
            int j = (d < cols) ? d : cols - 1;
            int i = d - j;

            while (j >= 0 && i < rows) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}