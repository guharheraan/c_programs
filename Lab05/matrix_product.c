#include <stdio.h>

/*
  Program: Matrix multiplication C = A x B

  Reads two matrices A (m x n) and B (n x p) from standard input and prints C (m x p).

  Input format:
    m n               // rows and columns of A
    A[0][0] ... A[0][n-1]
    ...
    A[m-1][0] ... A[m-1][n-1]
    n p               // rows and columns of B (rows must equal n)
    B[0][0] ... B[0][p-1]
    ...
    B[n-1][0] ... B[n-1][p-1]

  Output:
    Matrix C (m x p) with each row on a new line and elements space-separated.

  Example:
    Input:
      2 3
      1 2 3
      4 5 6
      3 2
      7 8
      9 10
      11 12
    Output:
      58 64
      139 154

  Build:
    gcc -std=c11 -O2 -Wall -Wextra -o matrix_product matrix_product.c
*/

int main(void) {
    int m, n, n2, p;

    // Read A dimensions and elements
    if (scanf("%d %d", &m, &n) != 2) return 1;
    int A[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) scanf("%d", &A[i][j]);
    }

    // Read B dimensions and elements (rows must equal n)
    if (scanf("%d %d", &n2, &p) != 2) return 1;
    if (n2 != n) {
        fprintf(stderr, "Incompatible dimensions: A is %dx%d, B rows must be %d.\n", m, n, n);
        return 1;
    }
    int B[n][p];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) scanf("%d", &B[i][j]);
    }

    // Compute C = A x B (m x p)
    int C[m][p];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            int sum = 0;
            for (int k = 0; k < n; ++k) sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }

    // Output C with space-separated columns
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            if (j) printf(" ");
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
