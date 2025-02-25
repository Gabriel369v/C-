#include <stdio.h>  // Inclui a biblioteca de entrada e saída padrão
#include <stdlib.h> // Inclui a biblioteca para funções utilitárias gerais
#include <locale.h> // Inclui a biblioteca para configuração de localidade

int main() {
    setlocale(LC_ALL, ""); // Define o locale para o padrão do sistema

    int i = 1, n; // Declaração das variáveis: 'i' inicializada com 1 e 'n' para armazenar o número digitado

    printf("Digite um numero: "); // Solicita ao usuário que digite um número
    scanf("%d", &n); // Lê o número digitado pelo usuário e armazena na variável 'n'

    // Início do loop para imprimir a tabuada do número digitado
    do {
        printf("%d x %d = %d\n", n, i, n * i); // Imprime a multiplicação de 'n' por 'i'
        i++; // Incrementa 'i' para a próxima iteração
    } while (i <= 10); // Continua o loop até que 'i' seja maior que 10

    return 0; // Finaliza o programa
}
