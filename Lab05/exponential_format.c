#include <stdio.h>

/*
  Print a floating-point number in exponential format with different precision levels.

  Output (stdout):
    a. Exponential format correct to 2 decimal places
    b. Exponential format correct to 4 decimal places
    c. Exponential format correct to 8 decimal places

  Example Output:
    a. 1.05e+01
    b. 1.0457e+01
    c. 1.04567800e+01
*/

int main(void) {
    double num = 10.45678;

    printf("Value: %.5f\n\n", num);

    // a. Exponential format correct to 2 decimal places
    printf("a. Correct to 2 decimal places (exponential):\n");
    printf("   %.2e\n\n", num);

    // b. Exponential format correct to 4 decimal places
    printf("b. Correct to 4 decimal places (exponential):\n");
    printf("   %.4e\n\n", num);

    // c. Exponential format correct to 8 decimal places
    printf("c. Correct to 8 decimal places (exponential):\n");
    printf("   %.8e\n", num);

    return 0;
}
