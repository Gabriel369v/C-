#include <iostream>

int main() {
    int diaSemana = 3;

    switch (diaSemana) {
        case 1:
            std::cout << "Domingo" << std::endl;
            break;
        case 2:
            std::cout << "Segunda-feira" << std::endl;
            break;
        case 3:
            std::cout << "Terca-feira" << std::endl;
            break;
        case 4:
            std::cout << "Quarta-feira" << std::endl;
            break;
        case 5:
            std::cout << "Quinta-feira" << std::endl;
            break;
        case 6:
            std::cout << "Sexta-feira" << std::endl;
            break;
        case 7:
            std::cout << "Sabado" << std::endl;
            break;
        default:
            std::cout << "Dia invalido!" << std::endl;
            break;
    }

    return 0;
}
