#include <stdio.h>

/*
  Extract m characters from a string, starting at the nth character (1-based).

  Input (stdin):
    line of text (may contain spaces)
    n m            // n is 1-based start position, m is number of characters

  Output (stdout):
    the extracted substring (may be shorter if n/m exceed string length)

  Example
    In:
      Hello World
      7 5
    Out:
      World
*/

int main(void) {
    char s[1000];
    int n, m;

    // Read the source line (includes trailing \n if it fits)
    if (!fgets(s, sizeof s, stdin)) return 0;

    // Read n (start, 1-based) and m (length)
    if (scanf("%d %d", &n, &m) != 2) return 0;

    // Convert to 0-based index and clamp
    int start = (n > 0) ? n - 1 : 0;

    // Print up to m characters starting from start, stopping at newline or terminator
    int printed = 0;
    for (int i = start; s[i] != '\0' && s[i] != '\n' && printed < m; ++i) {
        putchar(s[i]);
        ++printed;
    }
    putchar('\n');

    return 0;
}
