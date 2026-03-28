#include <stdio.h>
/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 22 /09/2022
FIX04b_EX05: Faça um programa em Linguagem C para apresentar a tabuada de um número escolhido pelo usuário (1 a 10).
*/
int main (){
    int a = 0, b = 0, res = 0;
    scanf("%d", &a);
    printf("%d\n", a);
    do{

        res = a * b;
        printf("%d * %d = %d\n", a, b, res);
        b++;
    }while(b <= 10);

return 0;
}
