#include <iostream>

float media(float notas[], int quantidade) {
    float soma = 0;
    for (int i = 0; i < quantidade; ++i) {
        soma += notas[i];
    }
    return soma / quantidade;
}

int main() {
    float notas[] = {8.5, 9.0, 7.5};
    int quantidade = sizeof(notas) / sizeof(notas[0]);
    float resultado = media(notas, quantidade);
    std::cout << "Media: " << resultado << std::endl; // Saída: Média: 8.33333
    return 0;
}
