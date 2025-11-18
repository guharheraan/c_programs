#include <stdio.h>

/*
  Read a floating-point number and display the two rightmost digits of its integral part.

  Input (stdin):
    a floating-point number

  Output (stdout):
    the two rightmost digits of the integral part (00-99)

  Example
    In:
      12345.678
    Out:
      45

    In:
      -789.12
    Out:
      89

    In:
      5.5
    Out:
      05
*/

int main(void) {
    double num;

    // Read a floating-point number
    scanf("%lf", &num);

    // Convert to integer (truncates decimal part)
    int integral = (int)num;

    // Get absolute value to handle negative numbers
    if (integral < 0) integral = -integral;

    // Extract two rightmost digits using modulo 100
    int two_rightmost = integral % 100;

    // Print the two rightmost digits (with leading zero if needed)
    printf("%02d\n", two_rightmost);

    return 0;
}
