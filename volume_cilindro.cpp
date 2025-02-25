#include <iostream>
using namespace std;

int main() {
    float raio, altura, volume;
    
    // Entrada de dados
    cout << "Digite o raio do cilindro: ";
    cin >> raio;
    cout << "Digite a altura do cilindro: ";
    cin >> altura;
    
    // Cálculo do volume
    volume = 3.14 * raio * raio * altura;
    
    // Saída do resultado
    cout << "O volume e " << volume << endl;
    
    return 0;
}
