#include <stdio.h>

// Converts Celsius to Fahrenheit using F = (9*C/5) + 32
float celsius_to_fahrenheit(float c) {
    return (9.0f * c / 5.0f) + 32.0f;
}

// Converts Fahrenheit to Celsius using C = (F - 32) * 5 / 9
float fahrenheit_to_celsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

int main() {
    int choice;
    do {
        printf("\nTemperature Converter\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("0. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice. Exiting.\n");
            return 1;
        }

        if (choice == 1) {
            float c;
            printf("Enter temperature in Celsius: ");
            if (scanf("%f", &c) == 1) {
                float f = celsius_to_fahrenheit(c);
                printf("Fahrenheit = %.2f\n", f);
            } else {
                printf("Invalid input.\n");
                return 1;
            }
        } else if (choice == 2) {
            float f;
            printf("Enter temperature in Fahrenheit: ");
            if (scanf("%f", &f) == 1) {
                float c = fahrenheit_to_celsius(f);
                printf("Celsius = %.2f\n", c);
            } else {
                printf("Invalid input.\n");
                return 1;
            }
        } else if (choice != 0) {
            printf("Unknown option. Please select 0, 1, or 2.\n");
        }
    } while (choice != 0);

    printf("Exiting.\n");
    return 0;
}
