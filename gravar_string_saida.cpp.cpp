#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <fstream>

int main() 
{
    std::ofstream arquivo("saida.txt");  // Abre o arquivo "saida.txt" para gravação

    if (!arquivo) 
	{
        std::cerr << "Erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    std::string texto = "Esta é a string que será gravada no arquivo.";  // A string a ser gravada
    arquivo << texto << std::endl;  // Grava a string no arquivo

    arquivo.close();  // Fecha o arquivo

    std::cout << "String gravada com sucesso no arquivo!" << std::endl;

	system("pause");
	return 1;
  }