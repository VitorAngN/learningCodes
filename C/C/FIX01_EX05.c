/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX05: Elabore um algoritmo que calcule o preço de venda de um carro.
O preço de venda é formado pelo preço da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS.
As porcentagens são sobre o preço da montadora, que é lido do usuário. Apresente na tela o preço final e o valor dos impostos.
*/

#include <stdio.h> // biblioteca de input e output
 int main() {
    //entrada
    float precodocarro = 0, precodamontadora = 0, jur = 0;
    printf("Digite o valor do preço da montadora");
    scanf("%f", &precodamontadora);
    //processamento
    jur = (precodamontadora/100) * 43 ;
    precodocarro = (precodamontadora + jur);
    printf("\n preco final e: %f", precodocarro);
    printf("\n preço do juros: %f", jur);

 return 0;
 }
