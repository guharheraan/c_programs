/*
 * Program to calculate sum of harmonic series: 1 + 1/2 + 1/3 + ... + 1/n
 */

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    
    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer!\n");
        return 1;
    }
    
    // Calculate sum of harmonic series
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    
    // Display result
    printf("\nSum of harmonic series (1 + 1/2 + 1/3 + ... + 1/%d) = %.4f\n", n, sum);
    
    return 0;
}