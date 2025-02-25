#include <iostream>

int multiplicar(int x, int y) { // Função com dois argumentos
    return x * y;
}

int main() {
    int resultado = multiplicar(4, 5); // Passa 4 e 5 como argumentos
    std::cout << "Resultado: " << resultado << std::endl; // Saída: Resultado: 20
    return 0;
}
