#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso, altura, IMC;

    // Entrada
    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Digite sua altura: ";
    cin >> altura;

    // funcao para o IMC
    IMC = peso / (altura * altura);

    // Saída
    cout << fixed << setprecision(2);
    cout << "Seu IMC : " << IMC << endl;

    return 0;
}
