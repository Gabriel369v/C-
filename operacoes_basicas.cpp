#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int a = 5, b = 3;

    printf("A soma de %d e %d e = %d\n", a, b, a + b);
    printf("A subtracao de %d e %d e = %d\n", a, b, a - b);
    printf("A divisao de %d e %d e = %d\n", a, b, a / b);
    printf("A multiplicacao de %d e %d e = %d\n", a, b, a * b);
    printf("O resto da divisao entre %d e %d = %d\n", a, b, a % b);
    printf("O valor absoluto de -3 = %d\n", abs(-3));

    return 0;
}
