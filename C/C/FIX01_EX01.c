/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
Enunciado:FIX01_EX01: Faça um algoritmo que peça a idade do usuário e, em seguida, digite a mensagem: “Legal! Você tem *idade* anos!”.
*/

#include <stdio.h> // biblioteca de input e output
 int main() {
     //declaração de variaveis
    int idade = 0;
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    //processamento
    //resultado
    printf("\n Legal! Você tem %d anos!", idade);
return 0;
}
