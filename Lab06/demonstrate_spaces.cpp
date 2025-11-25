/*
 * Program to demonstrate space(x) function
 * Provides x spaces between output numbers
 */

#include <stdio.h>

// Function to print x spaces
void space(int x) {
    int i;
    for (i = 0; i < x; i++) {
        printf(" ");
    }
}

int main() {
    int num1, num2, num3;
    int spaces;
    
    // Input numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("Enter number of spaces: ");
    scanf("%d", &spaces);
    
    // Demonstration 1: Numbers with custom spacing
    printf("\nDemo 1: Numbers with %d spaces between them\n", spaces);
    printf("%d", num1);
    space(spaces);
    printf("%d", num2);
    space(spaces);
    printf("%d\n", num3);
    
    // Demonstration 2: Creating a formatted table
    printf("\nDemo 2: Formatted table using space function\n");
    printf("Number");
    space(5);
    printf("Square");
    space(5);
    printf("Cube\n");
    printf("------");
    space(5);
    printf("------");
    space(5);
    printf("----\n");
    
    for (int i = 1; i <= 5; i++) {
        printf("%d", i);
        space(10);
        printf("%d", i * i);
        space(10);
        printf("%d\n", i * i * i);
    }
    
    // Demonstration 3: Pattern using space function
    printf("\nDemo 3: Simple pattern\n");
    for (int i = 1; i <= 5; i++) {
        space(i * 2);
        printf("*\n");
    }
    
    return 0;
}