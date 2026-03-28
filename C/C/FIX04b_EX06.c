#include <stdio.h>
/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
FIX04b_EX06: Faça um programa em Linguagem C para calcular a média de notas obtida por um grupo de 8 alunos.
*/
int main (){
    int nota = 0, grupo = 1;
    do{
        scanf("%d", &nota);
        printf("nota %d: %d\n", grupo, nota);
        grupo++;
    }while(grupo <= 8);

return 0;
}
