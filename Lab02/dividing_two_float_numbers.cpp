/*
 * Program to divide two float numbers
 */

#include <stdio.h>

int main() {
    float num1, num2, result;
    
    // Input first number
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    // Input second number
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Check for division by zero
    if (num2 == 0) {
        printf("\nError: Division by zero is not allowed!\n");
        return 1;
    }
    
    // Perform division
    result = num1 / num2;
    
    // Display result
    printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
    
    return 0;
}