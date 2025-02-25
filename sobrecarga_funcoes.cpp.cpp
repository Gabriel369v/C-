#include <iostream>

void exibir(int x) {
    std::cout << "Inteiro: " << x << std::endl;
}

void exibir(double x) {
    std::cout << "Double: " << x << std::endl;
}

int main() {
    exibir(5);       // Chama exibir(int)
    exibir(5.0);     // Chama exibir(double)
    // exibir("texto"); // Erro: não há uma função exibir que aceite std::string
    return 0;
}
