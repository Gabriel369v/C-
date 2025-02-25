#include <iostream>
#include <iomanip>  // Inclui para manipular o formato da saída

int main() {
    float valorFloat = 3.14159f;  // Sufixo 'f' indica que é um float
    double valorDouble = 3.141592653589793;
    long double valorLongDouble = 3.141592653589793238462643383279L;  // Sufixo 'L' indica long double

    std::cout << std::fixed << std::setprecision(7);  // Define a precisão da saída para 7 dígitos
    std::cout << "Valor float: " << valorFloat << std::endl;
    
    std::cout << std::setprecision(15);  // Define a precisão da saída para 15 dígitos
    std::cout << "Valor double: " << valorDouble << std::endl;
    
    std::cout << std::setprecision(18);  // Define a precisão da saída para 18 dígitos
    std::cout << "Valor long double: " << valorLongDouble << std::endl;

    return 0;
}
