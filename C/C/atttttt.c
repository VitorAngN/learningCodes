#include <stdio.h>
#include <math.h>
int main() {
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, distance = 0;

    scanf("%f%f", &x1, &x2);
    scanf("%f%f", &y1 , &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4f\n", distance);

    return 0;
}

