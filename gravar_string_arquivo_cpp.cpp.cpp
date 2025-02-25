#include <iostream>
#include <fstream>  // Para manipulação de arquivos

int main() {
    // Cria e abre um arquivo txt chamado "arquivo.txt" para gravação
    std::ofstream arquivo("arquivo.txt");

    // Verifica se o arquivo foi aberto corretamente
    if (!arquivo) {
        std::cerr << "Erro ao criar o arquivo!" << std::endl;
        return 1;
    }

    // A string que será gravada no arquivo
    std::string texto = "Este é o conteúdo que será gravado no arquivo.";

    // Grava a string no arquivo
    arquivo << texto << std::endl;

  // Fecha o arquivo
    arquivo.close();

    std::cout << "Arquivo criado e string gravada com sucesso!" << std::endl;

return 0;
}