#include <stdio.h>

/*
  Read two matrices A and B (same dimensions) and print A+B and A-B.

  Input:
    r c
    A (r rows, c columns)
    B (r rows, c columns)

  Output:
    A+B (r rows)
    A-B (r rows)
*/

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &B[i][j]);

    // Print A + B
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j) printf(" ");
            printf("%d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    // Print A - B
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j) printf(" ");
            printf("%d", A[i][j] - B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
