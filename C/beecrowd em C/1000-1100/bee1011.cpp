#include <string>
#include <stdio.h>
#include <iostream>
#define PI 3.14159

int main() {
    double R = 0, volume = 0;
    scanf("%lf", &R);
    volume = (4.0/3 * PI * (R*R*R));
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}