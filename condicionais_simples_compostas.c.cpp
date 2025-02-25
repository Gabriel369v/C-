#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5, opcao = 2;
    float b = 2.5;
    char c = 'x';

    // Condicional simples
    if(a == 5){
        printf("A variavel a = 5 \n");
    }
    if(c == 'x'){
        printf("A variavel c = x \n");
    }
    if(b == 2.5){
        printf("A variavel b e 2.5\n");
    }
    if(a % 2 == 1){
        printf("A variavel a e impar\n");

    }else{
        printf("A variavel a e par\n");
    }

    // Condicional composta
    if(opcao == 2){
        printf("A opcao e igual a dois \n");
    }else {
        printf("A opcao nao e igual a um ou a dois\n");
    }

    return 0;
}
