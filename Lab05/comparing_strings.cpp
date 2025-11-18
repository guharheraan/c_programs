/*
 * Program to compare two strings using strcmp() function
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;
    
    // Input first string
    printf("Enter first string: ");
    gets(str1);  // or use fgets(str1, 100, stdin);
    
    // Input second string
    printf("Enter second string: ");
    gets(str2);  // or use fgets(str2, 100, stdin);
    
    // Compare strings using strcmp()
    result = strcmp(str1, str2);
    
    // Display comparison result
    printf("\nComparison Result:\n");
    
    if (result == 0) {
        printf("'%s' is EQUAL to '%s'\n", str1, str2);
    }
    else if (result < 0) {
        printf("'%s' is LESS than '%s'\n", str1, str2);
    }
    else {
        printf("'%s' is GREATER than '%s'\n", str1, str2);
    }
    
    return 0;
}