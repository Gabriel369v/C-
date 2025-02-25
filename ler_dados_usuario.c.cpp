#include <stdio.h>
#include <stdlib.h>

void readUserData() {
    FILE *PTRARQ;
    char line[150];

    // Open the file in read mode
    PTRARQ = fopen("USER_DATA.TXT", "r");
    if (PTRARQ == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo! Verifique se o arquivo USER_DATA.TXT existe.\n");
        exit(1);
    }

    printf("Dados do usuario armazenados no arquivo:\n");

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), PTRARQ) != NULL) {
        printf("%s", line);
    }

    fclose(PTRARQ);
}

int main(void) {
    readUserData();
    system("pause");
    return 0;
}
