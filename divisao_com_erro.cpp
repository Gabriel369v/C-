#include <iostream>

double dividir(double numerador, double denominador) {
    if (denominador != 0) {
        return numerador / denominador;
    } else {
        std::cerr << "Erro: Divisão por zero!" << std::endl;
        return 0; // Retorna 0 em caso de erro
    }
}

int main() {
    double resultado = dividir(10, 2); // Chamada da função
    std::cout << "Resultado: " << resultado << std::endl; // Saída: Resultado: 5
    return 0;
}
