#include <stdio.h>

int main() {
    float n1 = 0, n2 = 0, media = 0;
    scanf("%f", &n1);
    scanf("%f", &n2);
    media = (n1*3.5 + n2*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f\n", media);
    return 0;
}
