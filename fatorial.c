#include <stdio.h>
#include <stdlib.h> // Biblioteca necessária para system()

int main() {
    int num, fatorial = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O fatorial não é definido para números negativos.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %d\n", num, fatorial);
    }

    system("pause"); // Pausa a execução no Windows
    return 0;
}
