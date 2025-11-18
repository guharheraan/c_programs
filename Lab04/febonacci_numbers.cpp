/*
 * Program to print first m Fibonacci numbers using do-while loop
 * Fibonacci sequence: 1 1 2 3 5 8 13 21 ...
 */

#include <stdio.h>

int main() {
    int m, count = 1;
    int first = 1, second = 1, next;
    
    // Input number of Fibonacci terms
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &m);
    
    // Check for valid input
    if (m <= 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }
    
    printf("\nFirst %d Fibonacci numbers:\n", m);
    
    // Handle special cases
    if (m >= 1) {
        printf("%d ", first);
        count++;
    }
    
    if (m >= 2) {
        printf("%d ", second);
        count++;
    }
    
    // Generate remaining Fibonacci numbers using do-while loop
    if (m > 2) {
        do {
            next = first + second;  // Calculate next term
            printf("%d ", next);
            first = second;         // Update first term
            second = next;          // Update second term
            count++;
        } while (count <= m);
    }
    
    printf("\n");
    
    return 0;
}