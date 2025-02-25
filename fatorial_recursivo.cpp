#include <iostream>

int fatorial(int n) {
    if (n == 0) { // Caso Base
        return 1;
    } else { // Chamada Recursiva
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero = 5;
    std::cout << "Fatorial de " << numero << " é " << fatorial(numero) << std::endl;
    return 0;
}
