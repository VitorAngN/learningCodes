#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// sem ponteiro
/* cfloat receber(float f) {
    scanf_s("%f", &f);
    return f;


}
float convertF(float c) {
    c = ((9 * c) / 5) + 32;
    return c;
}
void apresentar(float c) {
    printf("c = %c", c);
}
int main(int argc, char** args) {
    setlocale(LC_ALL, "Portuguese_Brasil"); //padrão pt-br
    float fah = 0.0;
    fah = receber(fah);
    fah = convertF(fah);
    apresentar(fah);
    return 0;
}
*/
//com ponteiro
void receber(float* f) {
    scanf_s("%f", f);
}
void convertF(float* c) {
    c = ((9 * c) / 5) + 32;
}
void apresentar(float* c) {
    printf("c = %f", c);
}
int main(int argc, char** args) {
    setlocale(LC_ALL, "Portuguese_Brasil"); //padrão pt-br
    float fah = 0.0;
    float* c;
    c = &fah;
    receber(c);
    convertF(c);
    apresentar(c);
    return 0;
}
