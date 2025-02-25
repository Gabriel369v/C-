#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main() {
    char nome[30];
    int t = 0, cont = 1;  

    printf("\n\tDigite um nome: ");
    gets(nome);  
    
    t = t + 1;

    printf("\n\nMostrar nome dez vezes:"); 
    printf("\n\n"); 

    for (t = 1; t <= 10; t++) {
        printf("\n %d - %s", cont, nome);  
        cont = cont + 1; 
    }

    printf("\n\n"); 
    system("pause"); 
    return 0;
}
