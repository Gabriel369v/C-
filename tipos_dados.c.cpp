#include <stdio.h>

int main() {
    // Tipos Inteiros
    int idade = 25;              // Tipo inteiro padrão
    short ano = 2023;            // Tipo inteiro curto
    long populacao = 7000000L;   // Tipo inteiro longo
    long long distancia = 9223372036854775807LL; // Tipo inteiro muito longo

    // Tipos de Ponto Flutuante
    float preco = 19.99f;        // Tipo ponto flutuante de precisão simples
    double pi = 3.141592653589793; // Tipo ponto flutuante de precisão dupla
    long double e = 2.718281828459045L; // Tipo ponto flutuante de alta precisão

    // Tipo de Caractere
    char letra = 'A';            // Tipo caractere padrão


    // Exibindo os valores
    printf("Idade: %d\n", idade);
    printf("Ano: %d\n", ano);
    printf("População: %ld\n", populacao);
    printf("Distância: %lld\n", distancia);
    printf("Preço: %.2f\n", preco);
    printf("Pi: %.15f\n", pi);
    printf("e: %.15Lf\n", e);
    printf("Letra: %c\n", letra);
    // Para wchar_t, você precisa de printf especial, geralmente não suportado diretamente, então usamos `wprintf`
    // #include <wchar.h> deve ser incluído para usar wprintf
    // wprintf(L"Letra Larga: %lc\n", letraLarga); // Comentado para compatibilidade com compiladores que não suportam wprintf


    return 0;
}
