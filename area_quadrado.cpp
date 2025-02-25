#include <iostream>  


using namespace std;

int main() {
   
    int lado;
    std::cout << "Informe o valor do lado do quadrado ";
    std::cin >> lado;

    int area;
    area = lado * lado;

    std::cout << "O valor da area e: " << area << std::endl;

    return 0;  
}
