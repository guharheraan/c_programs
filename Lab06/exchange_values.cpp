/*
 * Program to exchange values of two global variables using a function
 */

#include <stdio.h>

// Global variables
int x, y;

// Function to exchange values of x and y
void exchange() {
    int temp;
    
    temp = x;
    x = y;
    y = temp;
    
    printf("Inside exchange(): x = %d, y = %d\n", x, y);
}

int main() {
    // Input values for x and y
    printf("Enter value of x: ");
    scanf("%d", &x);
    
    printf("Enter value of y: ");
    scanf("%d", &y);
    
    // Display values before exchange
    printf("\nBefore exchange: x = %d, y = %d\n", x, y);
    
    // Call exchange function
    exchange();
    
    // Display values after exchange
    printf("After exchange: x = %d, y = %d\n", x, y);
    
    return 0;
}