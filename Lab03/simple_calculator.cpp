#include <stdio.h>

/*
  Simple calculator: read two floats and an operator, perform operation and display result.

  Input (stdin):
    x (float)
    y (float)
    operator (+, -, *, /)

  Output (stdout):
    result of x operator y

  Example
    In:
      10
      5
      +
    Out:
      10.00 + 5.00 = 15.00

    In:
      20
      4
      /
    Out:
      20.00 / 4.00 = 5.00
*/

int main(void) {
    float x, y;
    char ch1;

    // Prompt and read first number
    printf("Enter first number (x): ");
    scanf("%f", &x);

    // Prompt and read second number
    printf("Enter second number (y): ");
    scanf("%f", &y);

    // Consume the newline left in buffer from previous scanf
    getchar();

    // Prompt and read operator using unformatted I/O
    printf("Enter operator (+, -, *, /): ");
    ch1 = getchar();  // unformatted I/O to read single character

    // Perform operation based on operator
    float result;
    switch (ch1) {
        case '+':
            result = x + y;
            printf("%.2f + %.2f = %.2f\n", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("%.2f - %.2f = %.2f\n", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("%.2f * %.2f = %.2f\n", x, y, result);
            break;
        case '/':
            if (y != 0) {
                result = x / y;
                printf("%.2f / %.2f = %.2f\n", x, y, result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
