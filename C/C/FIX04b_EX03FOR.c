/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
FIX04b_EX02: Faça um programa em Linguagem C que apresente os valores de 10 a 1.
*/
#include <stdio.h>
int main(){
    int tres = 0;
    for(tres = 3; tres <= 100; tres += 3){
        printf("%d-", tres);
    }
return 0;
}
