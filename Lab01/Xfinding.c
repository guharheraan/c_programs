#include <stdio.h>

int main() {
    // First set: a=250, b=85, c=25
    {
        float a = 250.0;
        float b = 85.0;
        float c = 25.0;
        float x = a / (b - c);
        printf("For a=%.0f, b=%.0f, c=%.0f => X = %.3f\n", a, b, c, x);
    }

    // Second set: a=300, b=70, c=7
    {
        float a = 300.0;
        float b = 70.0;
        float c = 70.0;
        float x = a / (b - c);
        printf("For a=%.0f, b=%.0f, c=%.0f => X = %.3f\n", a, b, c, x); 
    }

    return 0;
}

// the out put is : 
// For a=250, b=85, c=25 => X = 4.167
// For a=300, b=70, c=70 => X = 1.#IO --> this means infinity in the mengw setup.