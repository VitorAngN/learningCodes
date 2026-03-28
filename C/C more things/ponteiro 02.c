#include <stdio.h>

int main (int argc, char** argv){

    int a;//declarando um ponteiro para int
    int*c;
    a = 4;
    c = &a;// atribuindo um valor à variável c
    *c = 10;
    printf("\nIDENT \ttENDE \tVALOR");
    printf("\n a \t%p \t %d", &a ,a);
    printf("\n c \t%p \t %p", &c, c);

return 0;
}
