#include <iostream>

// Função que usa um ponteiro
void incrementarPonteiro(int* ptr) {
    (*ptr)++;  // Incrementa o valor apontado por 'ptr'
}

// Função que usa uma referência
void incrementarReferencia(int& ref) {
    ref++;  // Incrementa o valor referenciado por 'ref'
}

int main() {
    int numero1 = 10;
    int numero2 = 20;

    // Usando ponteiros
    std::cout << "Valor original de numero1: " << numero1 << std::endl;
    incrementarPonteiro(&numero1);
    std::cout << "Valor de numero1 apos incrementarPonteiro: " << numero1 << std::endl;

    // Usando referências
    std::cout << "Valor original de numero2: " << numero2 << std::endl;
    incrementarReferencia(numero2);
    std::cout << "Valor de numero2 apos incrementarReferencia: " << numero2 << std::endl;

    return 0;
}
