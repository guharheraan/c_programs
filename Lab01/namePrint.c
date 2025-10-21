#include <stdio.h>
int main() {
    // Sample mailing address
    char name[] = "guharheraan";
    char door_street[] = "123 Street";
    char city_pin[] = "kohat,26000";

    // Define border
    char border[] = "****************************";

    // Print the address with borders
    printf("%s\n", border);
    printf("* First line : %s *\n", name);
    printf("* Second line : %s *\n", door_street);
    printf("* Third line : %s *\n", city_pin);
    printf("%s\n", border);

    return 0;
}