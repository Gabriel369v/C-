#include <stdio.h>
#include <stdlib.h> // Inclui a biblioteca necessária para system()

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    system("pause"); // Pausa a execução no Windows
    return 0;
}
