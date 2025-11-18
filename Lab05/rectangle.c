#include <stdio.h>

/*
  Compute area and perimeter of a rectangle given its length and width.

  Input (stdin):
    length width    // two floating-point numbers

  Output (stdout):
    area and perimeter of the rectangle

  Formulas:
    area = length × width
    perimeter = 2 × (length + width)

  Example
    In:
      5 3
    Out:
      Area: 15.00
      Perimeter: 16.00
*/

int main(void) {
    double length, width;

    // Prompt user for input
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Compute area and perimeter
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Print results
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
