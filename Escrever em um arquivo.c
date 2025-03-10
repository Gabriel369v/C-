#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "w"); // abre o arquivo para escrita
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1; // Retorna erro se o arquivo não puder ser aberto
    }

    // Escreve no arquivo
    fprintf(arquivo, "Texto a ser gravado no arquivo\n");

    // Fecha o arquivo após o uso
    fclose(arquivo); 
    system("pause");
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
