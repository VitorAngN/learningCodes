/*
nome da equipe: Antonio Pignataro, Joao Victor ,Victor fares
patch 1.0 // 21/11/2022
-Escorpo do trabalho arquitetado
-Função Principal arquitetada
-divisão do trabalho em categorias
-biblioteca adicionada
-Struct contato, endereço e numero adicionadas
-constantes em trabalho
-fuções em trabalho

patch 1.1 // 22/11/2022
- função para buscar um contato por mês de aniversario, imprimir o cadastro de todas as pessoas que tem aniversario no mesmo mês.




*/
// bibliotecas
#include <stdio.h>
#include <math.h>
#include <string.h>
// protótipos


// constantes
/* struct principal */
/* Structs
Aqui sera as structs com o contato da pessoa contendo
todas as informações necessarias.
*/
/*struct do endereço do contato contendo todas as informações */
typedef struct Endereco{
        char Rua[50];
        int Numero;
        char Cpf[15];
        char Cidade[30];
        char Estado[3];
    } TpEndereco;
/*struct do telefone do contato */
typedef struct telefone{
    int DDD;
    long int numero;

} TpNumero;
typedef struct DataNascimento{
    int dia;
    int mes;
    int ano;



} TpDataNascimento;





typedef struct Contato{
    char Nome[50];
    char Email[50];
    TpEndereco Endereco;
    TpNumero Numero;
    TpDataNascimento Data;
    char observacao[256];

} Tpcontato;

Tpcontato contato[100]};
// funções
    buscarContato(){
    int lop = 0,
    i = 0,
    mes = 0;
    printf("digite o mes do aniversario: ");
    scanf("%d", &mes);
    switch(mes){
    case(1):
    for(; lop < strlen(contato[lop]); lop++){
    while(Tpcontato.Data.mes == mes){
    i++;
    printf(%s, contato[i]);



    }
    }
        break;
    case(2):

        break;
    case(3):

        break;
    case(4):

        break;
    case(5):

        break;
    case(6):

        break;
    case(7):

        break;
    case(8):

        break;
    case(9):

        break;
    case(10):

        break;
    case(11):

        break;
     case(12):

        break;
     default:
        printf("Mes Invalido");
        return buscarContato;
     }





     }









/* função principal
aqui fica todo o funcionamento da agenda de contatos
*/
int main (void){
    contato[0].Data.ano = 2000;
    contato[0].Data.mes = 12;
    contato[0].Data.dia = 10;
    contato[0].Email = "sjfabhf";
    contato[0].Endereco.Cidade = "cornos";
    contato[0].Endereco.Cpf = "000000123";
    contato[0].Endereco.Estado = "paraniul";
    contato[0].Endereco.Numero = "124";
    contato[0].Endereco.Rua = "almeida";
    contato[0].Nome = "carlos";
    contato[0].Numero = "88996562722";
    contato[0].observacao = "N/tem";
    int i = 0;
    printf("digite 1 para procurar por mes e 0 para finalizar o programa");
    scanf("%d", &i);
    if(i == 1){
        buscarContato();
    }else{
    printf("programa finalizado");
    }
}
