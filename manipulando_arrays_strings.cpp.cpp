#include <iostream>
#include <string> // Inclui a biblioteca para usar std::string

int main() {
    // Exemplo com arrays
    int numeros[5] = {1, 2, 3, 4, 5}; // Declara e inicializa um array de inteiros

    // Imprime os elementos do array
    std::cout << "Elementos do array numeros:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Exemplo com strings (usando std::string)
    std::string saudacao = "Olá, Mundo!";
    std::cout << "String saudacao: " << saudacao << std::endl;

    // Modifica e imprime a string
    saudacao[0] = 'o'; // Modifica o primeiro caractere
    std::cout << "String saudacao modificada: " << saudacao << std::endl;

    // Substring
    std::string sub = saudacao.substr(4, 5); // Extrai "Mundo"
    std::cout << "Substring: " << sub << std::endl;

    return 0;
}
