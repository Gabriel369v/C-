#include <stdio.h>

int main() {
    int num1, num2;
    int maior, menor, diferenca;

    // Ler os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Determinar o maior e o menor número
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    // Calcular a diferença
    diferenca = maior - menor;

    // Mostrar o resultado
    printf("A diferença entre o maior e o menor número é: %d\n", diferenca);

    return 0;
}
