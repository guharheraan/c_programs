/*
 * Program to extract m characters starting from nth position
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], extracted[100];
    int n, m, i, len;
    
    // Input the string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);
    
    len = strlen(str);
    
    // Input starting position and number of characters
    printf("Enter starting position (n): ");
    scanf("%d", &n);
    printf("Enter number of characters to extract (m): ");
    scanf("%d", &m);
    
    // Check if extraction is valid
    if (n < 1 || n > len) {
        printf("Invalid starting position!\n");
        return 1;
    }
    
    if (n + m - 1 > len) {
        printf("Not enough characters to extract!\n");
        return 1;
    }
    
    // Extract m characters starting from position n
    for (i = 0; i < m; i++) {
        extracted[i] = str[n - 1 + i];  // n-1 because array index starts at 0
    }
    extracted[m] = '\0';  // Add null terminator
    
    // Display results
    printf("\nOriginal string: %s\n", str);
    printf("Extracted string: %s\n", extracted);
    
    return 0;
}