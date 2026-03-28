/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX04: Elabore um algoritmo que leia o raio de uma circunferência, calcule e apresente sua área.
*/

#include <stdio.h> // biblioteca de input e output
#include <math.h> //biblioteca : matematica
#define PI 3.14 //definir uma constante PI
 int main() {
     //declaração de variaveis
  float raio = 0,
        resultado = 0;
    printf("Digite o valor do raio: ");
  scanf("%f:",&raio);
  //resultado = 3.14 * (raio*raio); (forma 1)
  resultado = PI * pow(raio,2);
    printf("\n resultado : %.2f", resultado);
return 0;
}
