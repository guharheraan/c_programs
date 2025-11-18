#include <stdio.h>

/*
  Read a name in three parts and display in different formats.

  Input (stdin):
    first_name middle_name last_name (e.g., ALLAH BUKSH CHAUDRY)

  Output (stdout):
    a. ALLAH B. CHAUDRY
    b. A. B. CHAUDRY
    c. CHAUDRY A. B.

  Example
    In:
      ALLAH BUKSH CHAUDRY
    Out:
      a. ALLAH B. CHAUDRY
      b. A. B. CHAUDRY
      c. CHAUDRY A. B.
*/

int main(void) {
    char first[50], middle[50], last[50];

    // Read three parts of the name using scanf
    printf("Enter name in three parts (first middle last): ");
    scanf("%s %s %s", first, middle, last);

    // a. First name and initial of middle name and last name
    printf("\na. %s %c. %s\n", first, middle[0], last);

    // b. Initial of first name, initial of middle name, and last name
    printf("b. %c. %c. %s\n", first[0], middle[0], last);

    // c. Last name, initial of first name, and initial of middle name
    printf("c. %s %c. %c.\n", last, first[0], middle[0]);

    return 0;
}
