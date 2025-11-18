/*
 * Program to calculate factorial of a number
 * Factorial of m = m! = m * (m-1) * (m-2) * ... * 1
 */

#include <stdio.h>

int main() {
    int m, i;
    long factorial = 1;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &m);
    
    // Check for valid input
    if (m < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 1;
    }
    
    // Calculate factorial
    for (i = 1; i <= m; i++) {
        factorial *= i;
    }
    
    // Display result
    printf("\nFactorial of %d = %ld\n", m, factorial);
    
    return 0;
}