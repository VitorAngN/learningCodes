/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX02: Faça um algoritmo que peça o ano de nascimento do usuário e apresente sua provável idade.”.
*/
#define anoAtual 2022
#include <stdio.h> // biblioteca de input e output
 int main() {
    //declaração de variaveis
    int nascimento = 0;
    int idade = 0;
    printf("Insira sua data de nascimento: ");
    scanf("%d", &nascimento);
    //processamento
    idade = anoAtual - nascimento;
    //resultado
    printf("\n Sua idade e: %d", idade);
return 0;
}
