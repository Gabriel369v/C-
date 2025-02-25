#include <iostream>

void processar(int x) {
    std::cout << "Processando int: " << x << std::endl;
}

void processar(double x) {
    std::cout << "Processando double: " << x << std::endl;
}

void processar(int x, double y) {
    std::cout << "Processando int e double: " << x << ", " << y << std::endl;
}

int main() {
    processar(5);            // Chama processar(int)
    processar(3.14);         // Chama processar(double)
    processar(10, 2.71);     // Chama processar(int, double)
    return 0;
}
