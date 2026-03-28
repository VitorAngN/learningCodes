#include <stdio.h>
/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
Enunciado:FIX04b_EX03: Faça um programa em Linguagem C que imprima todos os múltiplos de 3, entre 1 e 100.
*/
int main (){
    int a = 0;
    do{
        printf("%d-", a);
        a += 3;
    }while(a <= 100);

return 0;
}
