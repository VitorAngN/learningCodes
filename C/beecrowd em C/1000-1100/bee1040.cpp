#include <stdio.h>

int main() {
    double a, b, c, d, exame, mediaExame;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    double media  = (a*2 + b*3 + c*4 + d*1)/10;
    printf("Media: %.1lf\n", media);
    if(media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(media >= 5){
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame)/2;
        if(media >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media);
        }else {
            printf("Aluno reprovado.\n");
        }
        
    } else {
        printf("Aluno reprovado.\n");
    }


}