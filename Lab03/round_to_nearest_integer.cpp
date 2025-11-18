#include <stdio.h>
#include <math.h>

/*
  Read floating-point numbers, round them to the nearest integer, and print results.

  Input (stdin):
    floating-point numbers (one per line or space-separated)

  Output (stdout):
    rounded integers

  Example
    In:
      35.7
      50.21
      -23.73
      -46.45
    Out:
      35.7 rounded to 36
      50.21 rounded to 50
      -23.73 rounded to -24
      -46.45 rounded to -46
*/

int main(void) {
    float num;

    printf("Enter floating-point numbers (one per line, Ctrl+Z then Enter to end):\n");

    // Read and round numbers until EOF
    while (scanf("%f", &num) == 1) {
        int rounded = (int)round(num);
        printf("%.2f rounded to %d\n", num, rounded);
    }

    return 0;
}
