#include <stdio.h>

int main (int argc*, char** args){
    int i = 0;
    char a[10];
    for(; i < 11; i++){
        scanf("%c", &a[i]);
    }
    for(i = 0; i < 11; i++){
    printf("%c-", a);
    }
return 0;
}
