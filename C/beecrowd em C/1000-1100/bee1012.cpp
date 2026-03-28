#include <stdio.h>
#define pi 3.14159
int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double triangleRectangleArea = (A*C)/2;
    double circleArea = pi * (C*C);
    double trapezArea = ((A+B)*C)/2;
    double squareArea = B*B;
    double rectangleArea = A*B;
    printf("TRIANGULO: %.3lf\n", triangleRectangleArea);
    printf("CIRCULO: %.3lf\n", circleArea);
    printf("TRAPEZIO: %.3lf\n", trapezArea);
    printf("QUADRADO: %.3lf\n", squareArea);
    printf("RETANGULO: %.3lf\n", rectangleArea);
    return 0; 
}