#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* sem ponteiro
int v1(int x) {
    printf("digite numero 1");
    scanf_s("%d", &x);
    return x;
}
int v2(int x) {
    printf("digite numero 1");
    scanf_s("%d", &x);
    return x;
}
void MaiorMenor(int x, int z) {
    if (x < z) {
        printf("%d é maior que %d:", z, x);
    }
    else {
        printf("%d é maior que %d: ", x, z);

    }


}

int main(int argc, char** args) {
    setlocale(LC_ALL, "Portuguese_Brasil"); //padrão pt-br
    int k = 0, j = 0, i = 0;
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            k = v1(k);
        }
        else {
            j = v1(j);
        }
    }
    MaiorMenor(k, j);

    return 0;
}
*/
// com ponteiro
void  v1(int *x) {
    printf("digite numero :");
    scanf_s("%d", x);
}
void v2(int *x) {
    printf("digite numero :");
    scanf_s("%d", x);

}
void MaiorMenor(int x, int z) {
    if (x < z) {
        printf("%d é maior que %d:\n", z, x);
    }
    else {
        printf("%d é maior que %d: \n", x, z);
    }


}

int main(int argc, char** args) {
    setlocale(LC_ALL, "Portuguese_Brasil"); //padrão pt-br
    int k = 0, j = 0;
    int *i;
    i = &k;
    v1(i);
    i = &j;
    v1(i);
    MaiorMenor(k, j);

    return 0;
}