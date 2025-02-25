#include <iostream>

void mostrar(int x) {
    std::cout << "Numero: " << x << std::endl;
}

void mostrar(int x, int y) {
    std::cout << "Numero 1: " << x << ", Numero 2: " << y << std::endl;
}

int main() {
    mostrar(10);        // Chama a versão com um parâmetro
    mostrar(10, 20);    // Chama a versão com dois parâmetros
    return 0;
}
