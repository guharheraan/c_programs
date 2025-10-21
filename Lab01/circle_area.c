#include <stdio.h>

// Program: Compute area of a circle using a symbolic constant for PI
// Problem: Given the radius of a circle, compute and display its area.
// Assumption: Use a suitable value for radius (can be changed by editing RADIUS below).

#define PI 3.14159265358979323846

int main(void) {
    // Assume a suitable radius value; modify as needed
    double radius = 5.0; 

    double area = PI * radius * radius;

    printf("Radius: %.2f\n", radius);
    printf("Area  : %.6f\n", area);

    return 0;
}
