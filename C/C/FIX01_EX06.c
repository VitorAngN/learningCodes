/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX04: Elabore um algoritmo que leia o raio de uma circunferência, calcule e apresente sua área.
*/
#include <stdio.h> // biblioteca de input e output
#include <math.h> // biblioteca de matematica
int main() {
     //declaração de variaveis
    int a = 0,
        b = 0,
        soma = 0,
        resultado = 0;
    printf("Digite o valor do a e do b: ");
    scanf("%d %d",&a, &b);
    //processamento
    soma = a + b;
    resultado = pow(soma,3);
    //saida
    printf("\n resultado : %d", resultado);
return 0;
}
