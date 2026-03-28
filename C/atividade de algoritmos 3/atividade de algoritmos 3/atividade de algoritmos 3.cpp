#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// sem ponteiro
/* cfloat receber(float c) {
    scanf_s("%f", &c);
    return c;


}
float convertF(float f) {
    f = ((9 * f) / 5) + 32;
    return f;
}
void apresentar(float f) {
    printf("f = %f", f);


}
int main(int argc, char** args) {
    setlocale(LC_ALL, "Portuguese_Brasil"); //padrão pt-br
    float cel = 0.0;
    cel = receber(cel);
    cel = convertF(cel);
    apresentar(cel);
    return 0;
}
*/
//com ponteiro
void receber(float *c) {
    scanf_s("%f", c);
}
void convertF(float *f) {
    f = ((9 * f) / 5) + 32;
}
void apresentar(float *f) {
    printf("f = %f", f);
}
int main(int argc, char** args) {
    setlocale(LC_ALL, "Portuguese_Brasil"); //padrão pt-br
    float cel = 0.0;
    float *f;
    f = &cel;
    receber(f);
    convertF(f);
    apresentar(f);
    return 0;
}
