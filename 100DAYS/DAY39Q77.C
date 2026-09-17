#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];
    int i, j, distinct = 1;

    // Step 1: Take order of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Step 2: Take matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < rows && i < cols; i++) {
        for (j = i + 1; j < rows && j < cols; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    // Print result
    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
