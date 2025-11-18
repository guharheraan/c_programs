#include <stdio.h>

/*
  Program: Count occurrences of a specified character in a given line of text

  Input (stdin):
    - First line: the text (may contain spaces). If it ends with a newline, it is ignored for counting.
    - Second line: the character to count (first non-newline character of the line is used).

  Output (stdout):
    - Single integer: number of occurrences of the specified character in the text line.

  Example:
    Input:
      abracadabra
      a
    Output:
      5
*/

int main(void) {
    char line[1000];
    char target_line[100];

    // Read the text line
    if (!fgets(line, sizeof line, stdin)) return 0; // no input

    // Read the target character line
    if (!fgets(target_line, sizeof target_line, stdin)) return 0; // no target

    // Use the first non-newline character from target_line as the target
    char target = '\0';
    for (int i = 0; target_line[i] != '\0'; ++i) {
        if (target_line[i] == '\n' || target_line[i] == '\r') continue;
        target = target_line[i];
        break;
    }

    int count = 0;
    // Count occurrences in line, stopping at newline or string terminator
    for (int i = 0; line[i] != '\0' && line[i] != '\n'; ++i) {
        if (line[i] == target) ++count;
    }

    printf("%d\n", count);
    return 0;
}
