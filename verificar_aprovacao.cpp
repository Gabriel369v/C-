#include <iostream>

using namespace std;

int main() {
    //Declaracao de variaveis
    int nota1, nota2, media;

    //Entrada
    printf("Digite a primeiro nota ");
    scanf("%d",&nota1);
    printf("Digite a segunda nota ");
    scanf("%d", &nota2);

    //funcao
    media = (nota1 + nota2)/2;
    //Processamento
    if (media >= 5){
        printf("Aprovado");
    }else{
        printf("REPROVADO");
    }

    return 0;
}
