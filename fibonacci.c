#include <stdio.h>

int main() {
    int a = 0, b = 1, proximo;
    printf("Sequecia de fibonacci: \n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    system("pause");
    return 0;
}