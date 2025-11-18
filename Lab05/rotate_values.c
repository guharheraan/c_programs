#include <stdio.h>

/*
  Rotate values of three variables: x ← y, y ← z, z ← x

  Input (stdin):
    x y z    // three integer values

  Output (stdout):
    x y z    // after rotation

  Example
    In:
      1 2 3
    Out:
      2 3 1
*/

int main(void) {
    int x, y, z;

    // Read three values
    scanf("%d %d %d", &x, &y, &z);

    // Rotate: save x, then shift y→x, z→y, saved_x→z
    int temp = x;
    x = y;
    y = z;
    z = temp;

    // Print rotated values
    printf("%d %d %d\n", x, y, z);

    return 0;
}
