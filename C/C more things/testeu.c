#include <stdio.h>
#define PIs 3.14

void A(){
    float r, area = 0, n = 3.14159;
    scanf("%f", &r);
    r = r * r;
    area =  PIs * r;
    printf("A=%.4f\n", area);
}
int main (){
   A();


return 0;
}
