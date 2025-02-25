#include <stdio.h>
int main(){
    int numero, div;//variaveis
    //para o usuario digitar uma numero
    printf("Digite um numero para ver se ele epar ou impar: ");
    scanf("%d", &numero);
    
    //dividi em 2 e se 0 e igual ou numero digitado
    if(numero % 2 == 0){
        div = numero / 2;
        printf("o numero %d he par ea sua metade eh %d\n",numero, div);//mosta numero e divisao

    }else{
        printf("O numero %d eh impar\n", numero);// se nao for par mostra else impar
    }


    return 0;
}