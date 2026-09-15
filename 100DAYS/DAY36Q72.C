#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}