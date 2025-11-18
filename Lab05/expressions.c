#include <stdio.h>

/*
  Read values of x and y and compute three expressions:
    a. (x+y)/(x-y)
    b. (x+y)/2
    c. (x+y)(x-y)

  Input (stdin):
    x (float)
    y (float)

  Output (stdout):
    Three computed expressions

  Example
    In:
      10
      5
    Out:
      (x+y)/(x-y) = 3.00
      (x+y)/2 = 7.50
      (x+y)(x-y) = 75.00
*/

int main(void) {
    float x, y;

    // Read x and y
    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of y: ");
    scanf("%f", &y);

    // Compute the three expressions
    float expr1, expr2, expr3;

    // Expression 1: (x+y)/(x-y)
    if (x - y != 0) {
        expr1 = (x + y) / (x - y);
        printf("(x+y)/(x-y) = %.2f\n", expr1);
    } else {
        printf("(x+y)/(x-y) = Error: Division by zero (x-y = 0)\n");
    }

    // Expression 2: (x+y)/2
    expr2 = (x + y) / 2;
    printf("(x+y)/2 = %.2f\n", expr2);

    // Expression 3: (x+y)(x-y)
    expr3 = (x + y) * (x - y);
    printf("(x+y)(x-y) = %.2f\n", expr3);

    return 0;
}
