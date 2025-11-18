/*
 * Program to evaluate investment equation: V = P(1+r)^n
 * P: Principal (1000 to 10000)
 * r: Rate of interest (0.10 to 0.20)
 * n: Number of years (1 to 10)
 */

#include <stdio.h>
#include <math.h>

int main() {
    int P, n;
    float r, V;
    
    printf("INVESTMENT VALUE TABLES\n");
    printf("=======================\n\n");
    
    // Loop through different principal amounts
    for (P = 1000; P <= 10000; P += 1000) {
        
        printf("\nPrincipal Amount P = Rs. %d\n", P);
        printf("-----------------------------------------------------------\n");
        printf("Year(n)\t");
        
        // Print header for interest rates
        for (r = 0.10; r <= 0.20; r += 0.01) {
            printf("r=%.2f\t", r);
        }
        printf("\n-----------------------------------------------------------\n");
        
        // Loop through years
        for (n = 1; n <= 10; n++) {
            printf("%d\t", n);
            
            // Loop through interest rates
            for (r = 0.10; r <= 0.20; r += 0.01) {
                V = P * pow((1 + r), n);  // Calculate investment value
                printf("%.0f\t", V);
            }
            printf("\n");
        }
    }
    
    return 0;
}