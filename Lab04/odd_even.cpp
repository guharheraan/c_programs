#include <stdio.h>

/*
  Determine whether a given number is odd or even.

  Input (stdin):
    an integer number

  Output (stdout):
    "NUMBER IS EVEN" or "NUMBER IS ODD"

  Two approaches:
    a. Without using else option
    b. With else option
*/

int main(void) {
    int num;

    // Read a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // a. Without using else option
    printf("\na. Without else option:\n");
    if (num % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    }
    if (num % 2 != 0) {
        printf("NUMBER IS ODD\n");
    }

    // b. With else option
    printf("\nb. With else option:\n");
    if (num % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    } else {
        printf("NUMBER IS ODD\n");
    }

    return 0;
}
