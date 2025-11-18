#include <stdio.h>

/*
  Read and display a table of data with proper justification.

  Input (stdin):
    name code price (for each row)

  Output (stdout):
    Formatted table with:
      - Name: left-justified
      - Code: left-justified
      - Price: right-justified

  Example
    In:
      Fan 67831 1234.50
      Motor 450 5786.70
    Out:
      Name                Code            Price
      ================================================
      Fan                 67831           1234.50
      Motor               450             5786.70
*/

int main(void) {
    char name[50];
    int code;
    double price;
    
	//Read the first row
    printf("Enter first item (name code price): ");
    scanf("%s %d %lf", name, &code, &price);
	//Read the second row
    printf("Enter second item (name code price): ");
    scanf("%s %d %lf", name, &code, &price);

    // Print table header
    printf("%-20s %-15s %15s\n", "Name", "Code", "Price");
    printf("=====================================================\n");

    // display first row
    printf("%-20s %-15d %15.2f\n", name, code, price);
    //  display second row
    printf("%-20s %-15d %15.2f\n", name, code, price);

    return 0;
}
