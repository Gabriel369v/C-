#include <iostream>

int main() {
    int idade = 20;

    if (idade < 18) {
        std::cout << "Voce e menor de idade." << std::endl;
    } else if (idade >= 18 && idade < 65) {
        std::cout << "Voce e adulto." << std::endl;
    } else {
        std::cout << "Voce e idoso." << std::endl;
    }

    return 0;
}
