/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX03: Faça um algoritmo que peça uma temperatura em graus célsius e apresente seu
respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32.
*/
#include <stdio.h> // biblioteca de input e output
 int main() {
    //entrada
    float temperaturaC = 0, temperaturaF = 0;
    printf("Informe a temperatura atual em Celsius(C): ");
    scanf("%f", &temperaturaC);
    //processamento
    temperaturaF = (9 * temperaturaC / 5) + 32;
    //saida
    printf("\n A temperatura atual em Fahrenheit é: %f", temperaturaF);
return 0;
}

