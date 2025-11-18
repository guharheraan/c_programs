#include <stdio.h>

/*
  Program: Compute the length of a given character string

  Input (stdin):
    A single line of text (characters), which may include spaces.

  Output (stdout):
    The length (number of characters) of the input string, excluding the
    trailing newline if present.

  Example
    In:
      Hello World
    Out:
      11
*/

int main(void) {
    char s[1000];  // buffer for input line (up to 999 chars plus terminator)

    // Read a line of text. fgets includes the trailing '\n' if it fits.
    if (!fgets(s, sizeof s, stdin)) {
        return 0; // no input
    }

    // Manually compute length, stopping at newline ('\n') or string terminator ('\0').
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') {
        ++len;
    }

    // Print the computed length
    printf("%d\n", len);
    return 0;
}
