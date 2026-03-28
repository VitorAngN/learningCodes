/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
Enunciado FIX04a_EX04: Faça um programa em Linguagem C que receba um número do usuário e apresente a fase "Seja bem vindo",
tantas vezes quanto for esse número. Um frase por linha.
*/
#include <stdio.h>
int main(void){
    int a = 0;
    scanf("%d" &a);
    while( a ){
        printf("< %d ", a);
        a+=3;
    }

}
