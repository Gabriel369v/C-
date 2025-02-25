#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5, b = 10, c = 15;
    char d = 'x';

    // Maior
    if(a > 2){
        printf("\n %d e maior que 2", a);
    }

    // Maior ou igual
    if(c >= b){
        printf("\n %d e maior que %d", c, b);
    }

    // Menor
    if(a < b){
        printf("\n %d e menor que 10", a);
    }

    // Menor ou igual
    if(a <= 10){
        printf("\n %d e menor ou igual a 10", a);
    }

    // Diferente
    if(c != 10){
        printf("\n %d nao e 10", c);
    }

    // char
    if(d != 'a'){
        printf("\n %c nao e a ", d);
    }

    return 0;
}
