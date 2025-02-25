#include <iostream>
#include <string>

int main() {
    int idade = 30;
    float altura = 1.75;
    char inicial = 'J';
    std::string nome = "João";
    bool estuda = true;

    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Altura: " << altura << std::endl;
    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "Estudante: " << (estuda ? "Sim" : "Não") << std::endl;

    return 0;
}
