#include <stdio.h>
int main(){
    int N = 0, /*numero de casos*/
    Na = 0,
    aux = 0;
    X = 0, /*valor 1*/
    Y = 0, /*valor 2*/
    soma = 0;
    scanf("%d", &N);
    for (Na = 0; Na < N; Na++){
    scanf("%d%d", &X, &Y);
        if(X > Y){
            aux = X;
            X = Y;
            Y aux;
        }
        printf("%d", X);
            }
        }
    }
    return 0;
}
