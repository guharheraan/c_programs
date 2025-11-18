#include <stdio.h>

/*
  Reverse the digits of a given number using a while loop.

  Input (stdin):
    an integer number

  Output (stdout):
    the number with its digits reversed

  Example
    In:
      12345
    Out:
      Original number: 12345
      Reversed number: 54321

    In:
      -789
    Out:
      Original number: -789
      Reversed number: -987
*/

int main(void) {
    int num, reversed = 0;

    // Read a number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    int sign = (num < 0) ? -1 : 1;  // Store sign
    num = (num < 0) ? -num : num;   // Work with absolute value

    // Reverse the digits using while loop
    while (num > 0) {
        int digit = num % 10;        // Extract last digit
        reversed = reversed * 10 + digit;  // Add digit to reversed number
        num = num / 10;              // Remove last digit
    }

    // Apply the sign back
    reversed = reversed * sign;

    // Display results
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
