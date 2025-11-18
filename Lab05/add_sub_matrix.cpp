/*
 * Program to read two matrices and perform addition and subtraction
 */

#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Sum[10][10], Diff[10][10];
    int rows, cols;
    int i, j;
    
    // Input dimensions of matrices
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    // Input elements of matrix A
    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Input elements of matrix B
    printf("\nEnter elements of matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    // Calculate A + B and A - B
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }
    
    // Display matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    // Display matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    // Display A + B
    printf("\nA + B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }
    
    // Display A - B
    printf("\nA - B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}