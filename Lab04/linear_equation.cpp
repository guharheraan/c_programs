#include <stdio.h>

/*
  Solve a system of two linear equations with two unknowns:
    ax1 + bx2 = m
    cx1 + dx2 = n

  Formulas:
    x1 = (md - bn) / (ad - cb)
    x2 = (na - mc) / (ad - cb)

  Input (stdin):
    a, b, m (coefficients and constant of first equation)
    c, d, n (coefficients and constant of second equation)

  Output (stdout):
    x1 and x2 (solutions)

  Example
    In:
      2 3 8
      4 5 14
    Out:
      x1 = 1.00
      x2 = 2.00
      
      Verification:
      2*1 + 3*2 = 8
      4*1 + 5*2 = 14
*/

int main(void) {
    float a, b, m, c, d, n;

    // Read coefficients and constants for both equations
    printf("Enter coefficients and constant for equation 1 (a b m): ");
    scanf("%f %f %f", &a, &b, &m);

    printf("Enter coefficients and constant for equation 2 (c d n): ");
    scanf("%f %f %f", &c, &d, &n);

    // Calculate denominator (ad - cb)
    float denominator = (a * d) - (c * b);

    // Check if denominator is zero (no unique solution)
    if (denominator == 0) {
        printf("\nError: No unique solution (denominator is zero)\n");
        return 1;
    }

    // Calculate x1 and x2 using the given formulas
    float x1 = (m * d - b * n) / denominator;
    float x2 = (n * a - m * c) / denominator;

    // Display results
    printf("\nSolution:\n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    // Verification
    printf("\nVerification:\n");
    printf("%.2f*%.2f + %.2f*%.2f = %.2f (should be %.2f)\n", a, x1, b, x2, a*x1 + b*x2, m);
    printf("%.2f*%.2f + %.2f*%.2f = %.2f (should be %.2f)\n", c, x1, d, x2, c*x1 + d*x2, n);

    return 0;
}
