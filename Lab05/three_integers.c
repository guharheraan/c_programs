#include <stdio.h>

/*
  Read three integers using one scanf statement and output them in three ways:
    a. Using three printf statements
    b. Using one printf with conversion specifiers
    c. Using one printf without conversion specifiers (string concatenation)

  Input (stdin):
    three integers on one line or separate lines

  Output (stdout):
    Three different output formats

  Example
    In:
      10 20 30
    Out:
      a. 10
         20
         30
      b. 10 20 30
      c. 10 20 30
*/

int main(void) {
    int a, b, c;

    // Read three integers using one scanf statement
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // a. Output using three printf statements
    printf("\na. Using three printf statements:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    // b. Output using one printf with conversion specifiers
    printf("\nb. Using one printf with conversion specifiers:\n");
    printf("%d %d %d\n", a, b, c);

    // c. Output using one printf without conversion specifiers (string concatenation)
    printf("\nc. Using one printf without conversion specifiers:\n");
    printf("The three integers are: ");
    printf("first = ");
    printf("%d, ", a);
    printf("second = ");
    printf("%d, ", b);
    printf("third = ");
    printf("%d\n", c);

    return 0;
}
