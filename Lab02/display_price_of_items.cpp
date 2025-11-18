/*
 * Program to display price list of items
 */

#include <stdio.h>

int main() {
    float rice_price, sugar_price;
    
    // Input price of rice
    printf("Enter price of rice per kg: ");
    scanf("%f", &rice_price);
    
    // Input price of sugar
    printf("Enter price of sugar per kg: ");
    scanf("%f", &sugar_price);
    
    // Display price list
    printf("\n***LIST OF ITEMS***\n\n");
    printf("Item\t\tPrice\n");
    printf("----\t\t-----\n");
    printf("Rice\t\tRs. %.2f\n", rice_price);
    printf("Sugar\t\tRs. %.2f\n", sugar_price);
    
    return 0;
}