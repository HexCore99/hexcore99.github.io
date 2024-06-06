#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);

    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    // Input elements for matrix A
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for matrix B

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            scanf("%d", &B[i][j]);

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the elements of matrix C

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
