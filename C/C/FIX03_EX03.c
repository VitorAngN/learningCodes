/*
Nome..: joão vitor angelim nogueira
Turma..: EC31A-;C11
Data..: 05/09/2022
FIX03_EX03: Faça um programa em linguagem C que receba o valor do salário de um funcionário, se ele ganhar menos que 2 salários mínimos, acresça um bônus de 10% ao salário a receber.
*/
#include <stdio.h> // biblioteca de input e output
 int main() {
    float salario = 0;
        printf("digite seu salario: ");
        scanf("%f", &salario);
        if(salario < 2*1212){
         salario = (salario/100*10 + salario);
        }
    printf("\n seu salario final sera: %f ", salario);

 return 0;
 }
