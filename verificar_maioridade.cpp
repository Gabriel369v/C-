#include <iostream>

int main() {
    int idade = 17;
    std::string status = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    std::cout << "Status: " << status << std::endl;

    return 0;
}
