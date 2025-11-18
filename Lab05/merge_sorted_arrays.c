#include <stdio.h>

/*
  Merge two ascending arrays A and B into a single ascending array C.

  Input (stdin):
    nA
    A[0] ... A[nA-1]   // ascending
    nB
    B[0] ... B[nB-1]   // ascending

  Output (stdout):
    C[0] ... C[nA+nB-1]  // merged ascending sequence on one line

  Example
    In:
      3
      1 4 9
      4
      2 3 5 10
    Out:
      1 2 3 4 5 9 10
*/

int main(void) {
    int nA, nB;

    // Read size of A and its ascending elements
    scanf("%d", &nA);
    int A[nA];
    for (int i = 0; i < nA; ++i) scanf("%d", &A[i]);

    // Read size of B and its ascending elements
    scanf("%d", &nB);
    int B[nB];
    for (int i = 0; i < nB; ++i) scanf("%d", &B[i]);

    // Merge with two pointers i (A) and j (B) into C
    int C[nA + nB];
    int i = 0, j = 0, k = 0;
    while (i < nA && j < nB) {
        C[k++] = (A[i] <= B[j]) ? A[i++] : B[j++];
    }
    while (i < nA) C[k++] = A[i++];
    while (j < nB) C[k++] = B[j++];

    // Output merged array space-separated on one line
    for (int t = 0; t < k; ++t) {
        if (t) printf(" ");
        printf("%d", C[t]);
    }
    printf("\n");
    return 0;
}
