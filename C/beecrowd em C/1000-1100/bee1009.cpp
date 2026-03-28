#include <stdio.h>
#include <string>
#include <iostream>

int main() {
    char name[50];
    double fixSalary, sells;
    
    scanf("%s", name);
    scanf("%lf", &sells);
    scanf("%lf", &fixSalary);
    double moneyReturn = fixSalary + (sells * 0.15);
    printf("TOTAL = R$ %.2lf\n", moneyReturn); 

    return 0;
}