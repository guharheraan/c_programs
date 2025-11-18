/*
 * Program to merge two sorted arrays into a single sorted array
 */

#include <stdio.h>

int main() {
    // Input arrays (sorted in ascending order)
    int A[] = {100, 346, 532, 789, 921};
    int B[] = {210, 467, 632, 881, 1001};
    
    int sizeA = 5, sizeB = 5;
    int C[10];  // Result array
    
    int i = 0, j = 0, k = 0;  // Pointers for A, B, and C
    
    // Merge arrays by comparing elements
    while (i < sizeA && j < sizeB) {
        if (A[i] <= B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    
    // Copy remaining elements
    while (i < sizeA) C[k++] = A[i++];
    while (j < sizeB) C[k++] = B[j++];
    
    // Display merged array
    printf("Merged Array C: ");
    for (int x = 0; x < 10; x++) {
        printf("%d ", C[x]);
    }
    printf("\n");
    
    return 0;
}