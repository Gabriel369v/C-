#include <iostream>  // biblioteca

int main() {
    //entrada
    float valor, taxa, prestacao;
    int tempo;
    //processo
    std::cout << "Informe o valor: ";
    std::cin >> valor;
    std::cout << "Informe a taxa (em porcentagem): ";
    std::cin >> taxa;
    std::cout << "Informe o tempo de atraso: ";
    std::cin >> tempo;
    // Calcula (formular)
    prestacao = valor + (valor * (taxa / 100) * tempo);
    // Saida
    std::cout << "Sua prestacao e: " << prestacao << std::endl;
   // Fim do programa
    return 0;

}
