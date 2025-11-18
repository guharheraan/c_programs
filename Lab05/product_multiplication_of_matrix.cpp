/*
 * Program to multiply two matrices A and B to produce matrix C
 */

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int rowA, colA, rowB, colB;
    int i, j, k;
    
    // Input dimensions of matrix A
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &rowA, &colA);
    
    // Input dimensions of matrix B
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &rowB, &colB);
    
    // Check if multiplication is possible
    if (colA != rowB) {
        printf("Matrix multiplication not possible!\n");
        printf("Columns of A must equal rows of B.\n");
        return 1;
    }
    
    // Input elements of matrix A
    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colA; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Input elements of matrix B
    printf("\nEnter elements of matrix B:\n");
    for (i = 0; i < rowB; i++) {
        for (j = 0; j < colB; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    // Initialize matrix C with zeros
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            C[i][j] = 0;
        }
    }
    
    // Multiply matrices A and B
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            for (k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Display matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colA; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    // Display matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < rowB; i++) {
        for (j = 0; j < colB; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    // Display product matrix C
    printf("\nProduct Matrix C:\n");
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}