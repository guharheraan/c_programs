/*
 * Program to convert price from decimal form to paisa
 */

#include <stdio.h>

int main() {
    float price;
    int paisa;
    
    // Input price in decimal form
    printf("Enter the price (in rupees): ");
    scanf("%f", &price);
    
    // Convert to paisa (1 rupee = 100 paisa)
    paisa = (int)(price * 100);
    
    // Display result
    printf("\nPrice in paisa: %d\n", paisa);
    
    return 0;
}