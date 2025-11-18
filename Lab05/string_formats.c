#include <stdio.h>
#include <string.h>

/*
  Read a string and display it in different formats.

  Input (stdin):
    a string (e.g., "WORDPROCESSING")

  Output (stdout):
    a. String with space at midpoint (WORD PROCESSING)
    b. First half of string (WORD)
    c. Second half of string (PROCESSING)
    d. First character of each half with dots (W.P.)

  Example
    In:
      WORDPROCESSING
    Out:
      a. WORD PROCESSING
      b. WORD
      c. PROCESSING
      d. W.P.
*/

int main(void) {
    char str[100];

    // Read the string from terminal
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Calculate midpoint
    int mid = len / 2;

    // Extract first half and second half
    char first_half[100], second_half[100];
    strncpy(first_half, str, mid);
    first_half[mid] = '\0';
    strcpy(second_half, str + mid);

    // Display in different formats
    printf("\na. %s %s\n", first_half, second_half);
    printf("b. %s\n", first_half);
    printf("c. %s\n", second_half);
    printf("d. %c.%c.\n", first_half[0], second_half[0]);

    return 0;
}
