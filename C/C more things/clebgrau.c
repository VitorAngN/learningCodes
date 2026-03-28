#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int escolhaLista = 0, escolhaQuestaoAl = 0;
    printf("Lista De Fixação - Algoritmos,Condicionais e Repetição\n\n");
    printf("Selecione 1: Algoritmos E Condicionais || 2: Estruturas De Repetição\n\n");
    scanf("%i",&escolhaLista);

    if (escolhaLista==1) {

     printf("\nOpção Selecionada: 1 - Algoritmos E Condicionais\n\n");
     printf("Lista De Questões De Algoritmos E Condicionais \n\n");
     printf("1- Dada uma quantidade x de Megabytes (MB), converter este valor para Kilobytes (KB), para Bytes (B) e para Gigabytes (GB).Obs.: 1 GB = 1024 MB, 1 MB = 1024 KB, 1 KB = 1024 B.\n\n");
     printf("2- Dado o tempo de uma receita em horas e minutos (Ex.: 1h e 40min), converter esse tempo em segundos.\n\n");
     printf("3- Dados três notas e seus pesos, calcular a média ponderada destas notas.\n\n");
     printf("4- Dados dois números, calcular o valor absoluto da diferença entre eles.\n\n");
     printf("5- Dado o peso de três objetos, identificar qual deles é o mais pesado e qual é o menos pesado.\n\n");

     printf("Escolha Uma Questão: \n");
     scanf("%i",&escolhaQuestaoAl);




        }
    else if (escolhaLista!=1 || escolhaLista !=2) {
        printf("\nBait");
    }

       if (escolhaQuestaoAl==1) {
        printf("A Questão Selecionada Foi 1: \n");
        float x,kb,b,gb;
        printf("Informe Um Valor Em MegaBytes (MB)\n");
        scanf("%f",&x);
        kb = x * 1024;
        gb = x / 1024;
        b = x * 1000000;

        printf("\nValor Em Mb: %.0f \n Valor Em Kb: %.0f \n Valor Em B: %.0f\n% Valor Em Gb: %.2f ",x,kb,b,gb);
       }
     if (escolhaQuestaoAl==2) {
          float hora = 40,minutos,convertido;
          printf("A Questão Selecionada Foi 2: \n");
          printf("Informe O Número De Horas: \n");
          scanf("%f",&hora);
          printf("Informe O Número De Minutos: \n");
          scanf("%f",&minutos);
          convertido = hora * 60;
          convertido = convertido + minutos;
          convertido = minutos * 60;
          printf("Valores Informados: \n Horas: %.1f \n Minutos: %.1f \n Valor Convertido Em Segundos: %0.f",hora,minutos,convertido);
     }
     if (escolhaQuestaoAl==3){
            printf("A Questão Selecionada Foi 3: \n");
            float n1,n2,n3,p1,p2,p3,media;
            printf("Informe O Valor Da Primeira Nota: \n");
            scanf("%f",&n1);
            printf("Informe O Peso Da Primeira Nota: \n");
            scanf("%f",&p1);
            printf("Informe O Valor Segunda Nota: \n");
            scanf("%f",&n2);
            printf("Informe O Peso Da Segunda Nota: \n");
            scanf("%f",&p2);
            printf("Informe O Valor Terceira Nota: \n");
            scanf("%f",&n3);
            printf("Informe O Peso Da Terceira Nota: \n");
            scanf("%f",&p3);
            media = (n1 * p1 + n2 * p2 + n3 * p3)/ (p1 + p2 + p3);

            printf("A Media Ponderada Foi %.2f",media);}

     if   (escolhaQuestaoAl==4){
            printf("A Questão Selecionada Foi 4: \n");}

     if (escolhaQuestaoAl==5){
        printf("A Questão Selecionada Foi 5: \n");
        float p1,p2,p3,maior;
           printf("Informe O Primeiro Peso: \n");
            scanf("%f",&p1);
            printf("Informe O Segundo Peso: \n");
            scanf("%f",&p2);
            printf("Informe O Terceiro Peso \n");
            scanf("%f",&p3);

       if (p1>p2 && p1>p3 && p2<p3){
        printf("p1 é maior!");
        printf("p2 medio");
        printf("p3 baixo");
       }
       if (p2>p1 && p2>p3 && p1<p3){
        printf("p2 maior");
        printf("p3 medio");
        printf("p1 baixo");
       }
       if (p3>p1 && p3>p2 && p2<p1 && p2>p1
           ){
        printf("p3 maior");
        printf("p1 medio");
        printf("p2 baixo");
       }
     }

}













