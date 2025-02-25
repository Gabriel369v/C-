#include <iostream>

// Declaração da função
int soma(int a, int b);

int main() {
    int x = 5;
    int y = 10;
    int resultado = soma(x, y); // Uso da função

    std::cout << "Resultado: " << resultado << std::endl;
    return 0;
}

// Definição da função
int soma(int a, int b) {
    return a + b;
}
