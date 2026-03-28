#include <stdio.h>
#include <string>
#include <iostream>

int main() {
    int product1, product2, quantityP1, quantityP2;
    double priceP1, priceP2, totalToPay;
    scanf("%d %d %lf", &product1, &quantityP1, &priceP1);
    scanf("%d %d %lf", &product2, &quantityP2, &priceP2);
    totalToPay = quantityP1 * priceP1 + quantityP2 * priceP2;
    printf("VALOR A PAGAR: R$ %.2lf\n", totalToPay);
    return 0;
}
