//API's
#include <stdio.h>
//fuctions
float entrada(){
    float cel;
    scanf("%f", &cel);
    return cel;
}
float convecao(float cel){
    float fah;
    fah = (9*cel/5)+32;
    return fah;
}
void apresentar(float fah){
    printf("a temperatura dada em celsius em Farenheit e: %.2f", fah);
}

//main
int main (int argc, char** args){
    float cel, fah;
    cel = entrada();
    fah = convecao(cel);
    apresentar(fah);
}
