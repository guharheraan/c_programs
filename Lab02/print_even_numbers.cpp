/*
 * Program to print even numbers from 1 to 10
 */

#include <stdio.h>

int main() {
    int i;
    
    printf("Even numbers from 1 to 10:\n");
    
    // Loop through numbers 1 to 10
    for (i = 1; i <= 10; i++) {
        // Check if number is even
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}