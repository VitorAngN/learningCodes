#include <stdio.h>
struct dataDeNascimento{
            int dia, mes, ano;
        };
    struct Registro{
        char nome[50];
        struct dataDeNascimento teste1;
        char cpf[10];
    };
    int main(void){
    int i = 0;


    struct Registro teste;
    gets(teste.nome);
    scanf("%d", &teste.teste1.dia);
    scanf("%d", &teste.teste1.mes);
    scanf("%d", &teste.teste1.ano);
    gets(teste.cpf);7("nome:%s, Data de nascimento: %d/%d/%d, seu cpf: %s", teste.nome, teste.teste1.dia, teste.teste1.mes, teste.teste1.ano, teste.cpf);
    }
