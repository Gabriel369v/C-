#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt-br");
    printf("Olá Mundo ");

    return 0;
}