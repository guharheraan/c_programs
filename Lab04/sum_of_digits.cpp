/*
 * Program to compute sum of digits of a number
 */

#include <stdio.h>

int main() {
    int num, sum = 0, digit, original;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;  // Store original number
    
    // Calculate sum of digits
    while (num > 0) {
        digit = num % 10;    // Extract last digit
        sum += digit;        // Add to sum
        num = num / 10;      // Remove last digit
    }
    
    // Display result
    printf("\nSum of digits of %d = %d\n", original, sum);
    
    return 0;
}