#include <iostream>

void imprimir(int x) {
    std::cout << "Inteiro: " << x << std::endl;
}

void imprimir(double x) {
    std::cout << "Double: " << x << std::endl;
}

int main() {
    imprimir(5);        // Chama a versão int
    imprimir(3.14);     // Chama a versão double
    return 0;
}
