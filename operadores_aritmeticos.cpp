#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    std::cout << "a + b = " << (a + b) << std::endl;  // Adição
    std::cout << "a - b = " << (a - b) << std::endl;  // Subtração
    std::cout << "a * b = " << (a * b) << std::endl;  // Multiplicação
    std::cout << "a / b = " << (a / b) << std::endl;  // Divisão inteira
    std::cout << "a % b = " << (a % b) << std::endl;  // Módulo

    int x = 5;
    std::cout << "Pre-incremento de x: " << (++x) << std::endl; // x é agora 6
    std::cout << "Pos-incremento de x: " << (x++) << std::endl; // x é agora 6, mas será 7 após esta linha
    std::cout << "Valor atual de x: " << x << std::endl; // x é 7

    return 0;
}
