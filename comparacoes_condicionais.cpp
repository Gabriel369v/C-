#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    if (a > b) { // Verifica se 'a' é maior que 'b'
        cout << "a e maior que b" << endl;
    } else if (a < b) { // Verifica se 'a' é menor que 'b'
        cout << "a e menor que b" << endl;
    } else if (a == b) { // Verifica se 'a' é igual a 'b'
        cout << "a e igual a b" << endl;
    }

    if (a != b) { // Verifica se 'a' é diferente de 'b'
        cout << "a e diferente de b" << endl;
    }

    // Declarando e inicializando as variáveis 'x' e 'y'
    int x = 15;
    int y = 20;

    if (x >= 10 && x <= 20 && y >= 15 && y <= 25) { // Verifica se 'x' está entre 10 e 20 e se 'y' está entre 15 e 25
        cout << "x esta entre 10 e 20, e y esta entre 15 e 25." << endl;
    } else {
        cout << "Pelo menos uma das condições nao é verdadeira." << endl;
    }

    return 0;
}
