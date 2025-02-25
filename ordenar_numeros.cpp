#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Leitura dos três números inteiros
    cout << "Digite o primero numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite o terceiro numero: ";
    cin >> num3;

    // Verifica e imprime os números em ordem crescente
    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            cout << num1 << ", " << num2 << ", " << num3 << endl;
        } else {
            cout << num1 << ", " << num3 << ", " << num2 << endl;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            cout << num2 << ", " << num1 << ", " << num3 << endl;
        } else {
            cout << num2 << ", " << num3 << ", " << num1 << endl;
        }
    } else {
        if (num1 <= num2) {
            cout << num3 << ", " << num1 << ", " << num2 << endl;
        } else {
            cout << num3 << ", " << num2 << ", " << num1 << endl;
        }
    }



    return 0;
}
