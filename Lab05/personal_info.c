#include <stdio.h>

/*
  Read personal information (name, address, age, weight, height) using unformatted I/O
  and display the information.

  Input (stdin):
    name (string)
    address (string)
    age (integer)
    weight (float)
    height (float)

  Output (stdout):
    Display all the entered information

  Example
    In:
      John Doe
      123 Main Street
      25
      70.5
      5.9
    Out:
      ===== Personal Information =====
      Name: John Doe
      Address: 123 Main Street
      Age: 25 years
      Weight: 70.50 kg
      Height: 5.90 feet
*/

int main(void) {
    char name[100];
    char address[150];
    int age;
    float weight, height;

    // Read name using fgets (unformatted string I/O)
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Read address using fgets (unformatted string I/O)
    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    // Read age using scanf
    printf("Enter your age (in years): ");
    scanf("%d", &age);

    // Read weight using scanf
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Read height using scanf
    printf("Enter your height (in feet): ");
    scanf("%f", &height);

    // Display the information
    printf("\n===== Personal Information =====\n");
    printf("Name: %s", name);           // fgets includes newline, so no \n needed
    printf("Address: %s", address);     // fgets includes newline, so no \n needed
    printf("Age: %d years\n", age);
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f feet\n", height);

    return 0;
}
