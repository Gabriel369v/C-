#include <stdio.h>

int main() {
    int num, reverso = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        reverso = reverso * 10 + num % 10;
        num /=10;
    }
    printf("O numero invertido é %d\n", reverso);
    system("pause");
    return 0;
}