#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "a"); 
    if (arquivo == NULL) { 
        printf("Erro ao abrir o arquivo!\n");
        return 1;  
    }

    fprintf(arquivo, "Esta linha foi adicionada ao final do arquivo.\n");

    fclose(arquivo);
    printf("Texto acrescentado com sucesso!\n");
    
    system("pause");
    return 0;
}
