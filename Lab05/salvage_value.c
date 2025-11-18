#include <stdio.h>

/*
  Compute salvage value using straight-line depreciation method.

  Formula (rearranged):
    Depreciation = (Purchase Price - Salvage Value) / Years of Service
    Salvage Value = Purchase Price - (Depreciation × Years of Service)

  Input (stdin):
    purchase price, years of service, annual depreciation

  Output (stdout):
    salvage value of the item

  Example
    In:
      Purchase Price: 10000
      Years of Service: 5
      Annual Depreciation: 1500
    Out:
      Salvage Value: 2500.00
*/

int main(void) {
    double purchase_price, years_of_service, annual_depreciation;

    // Prompt and read purchase price
    printf("Enter the purchase price of the item: ");
    scanf("%lf", &purchase_price);

    // Prompt and read years of service
    printf("Enter the years of service: ");
    scanf("%lf", &years_of_service);

    // Prompt and read annual depreciation
    printf("Enter the annual depreciation: ");
    scanf("%lf", &annual_depreciation);

    // Calculate salvage value
    // Salvage Value = Purchase Price - (Annual Depreciation × Years of Service)
    double salvage_value = purchase_price - (annual_depreciation * years_of_service);

    // Print result
    printf("Salvage Value: %.2f\n", salvage_value);

    return 0;
}
