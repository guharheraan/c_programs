#include <stdio.h>

/*
  Read a floating-point number and display the rightmost digit of its integral part.

  Input (stdin):
    a floating-point number

  Output (stdout):
    the rightmost digit of the integral part (0-9)

  Example
    In:
      123.456
    Out:
      3

    In:
      -45.78
    Out:
      5
*/

int main(void) {
    double num;

    // Read a floating-point number
    scanf("%lf", &num);

    // Convert to integer (truncates decimal part)
    int integral = (int)num;

    // Get absolute value to handle negative numbers
    if (integral < 0) integral = -integral;

    // Extract rightmost digit using modulo 10
    int rightmost = integral % 10;

    // Print the rightmost digit
    printf("%d\n", rightmost);

    return 0;
}
