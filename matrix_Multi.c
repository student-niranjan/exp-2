#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;

    // Hardcoded matrices
    int i, j, k;

    // Matrix A
    int tempA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // Matrix B
    int tempB[3][2] = {{7, 8}, {9, 10}, {11, 12}};

    // Copy to arrays
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            a[i][j] = tempA[i][j];

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            b[i][j] = tempB[i][j];

    // Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    // Print result
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
