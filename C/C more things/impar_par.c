#include <stdio.h>


int receberI(int x){
    scanf("%d", &x);
    return x;

}
void imparOuPar(int x){
    int k;
    k = x%2;
    if(k != 0){
        printf("seu numero é impar %d", x);

    }else{
        printf("seu numero é par %d", x);
}
}
int main(int argc*, char** args){
    int i;
    i = receberI(i);
    imparOuPar(i);
    return 0;
}
