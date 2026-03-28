/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
FIX03_EX02: Faça um programa em linguagem C que informe se uma determinada pessoa é maior de idade.
*/
#include <stdio.h> // biblioteca de input e output
 int main() {
    int idade = 0;
        printf("digite sua idade: ");
        scanf("%d", &idade);
        if(idade >= 18){
            printf("\nvoce e maior de idade");
        }
    printf("\n sua idade e: %d ", idade);

 return 0;
 }
