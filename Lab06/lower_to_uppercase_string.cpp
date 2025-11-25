/*
 * Program to convert lowercase characters to uppercase using a function
 */

#include <stdio.h>

// Function to convert lowercase to uppercase
void convertToUpper(char str[]) {
    int i = 0;
    
    // Scan through each character
    while (str[i] != '\0') {
        // Check if character is lowercase (a-z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);
    
    // Display original string
    printf("\nOriginal string: %s\n", str);
    
    // Convert to uppercase
    convertToUpper(str);
    
    // Display converted string
    printf("Uppercase string: %s\n", str);
    
    return 0;
}