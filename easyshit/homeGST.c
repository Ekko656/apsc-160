#include <stdio.h>

int main(void) {
    int price;
    double grossTax, rebate, gst;

    printf("Enter the purchase price of the home\n");
    scanf("%d", &price);

    if (price < 0) {
        printf("The house price cannot be negative.\n");
        return 0;
    }

    grossTax = 0.05 * price;

    if (price <= 350000) {
        rebate = 0.36 * grossTax;
        if (rebate > 5000.0) {
            rebate = 5000.0;
        }
    } else if (price < 450000) {  // implicitly price > 350000 here
        rebate = 5000.0 * (450000.0 - price) / 100000.0;
    } else {
        rebate = 0.0;
    }

    gst = grossTax - rebate;

    printf("GST payable is %.2f\n", gst);

    return 0;
}
