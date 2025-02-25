#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char username[50];
    char email[50];
    char street[100];
    char phone[20];
    char cep[10];
} User;

void storeUserData(User *user) {
    FILE *PTRARQ;

    // Open file in append mode
    PTRARQ = fopen("USER_DATA.TXT", "a");
    if (PTRARQ == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // Write user data to the file
    fprintf(PTRARQ, "Username: %s\n", user->username);
    fprintf(PTRARQ, "Email: %s\n", user->email);
    fprintf(PTRARQ, "Street: %s\n", user->street);
    fprintf(PTRARQ, "Phone: %s\n", user->phone);
    fprintf(PTRARQ, "CEP: %s\n\n", user->cep); // Add a newline for separation

    fclose(PTRARQ);
}

void collectUserData(User *user) {
    printf("Digite o nome de usuario: ");
    fgets(user->username, sizeof(user->username), stdin);
    user->username[strcspn(user->username, "\n")] = 0; // Remove o '\n'

    printf("Digite o email: ");
    fgets(user->email, sizeof(user->email), stdin);
    user->email[strcspn(user->email, "\n")] = 0;

    printf("Digite a rua: ");
    fgets(user->street, sizeof(user->street), stdin);
    user->street[strcspn(user->street, "\n")] = 0;

    printf("Digite o telefone: ");
    fgets(user->phone, sizeof(user->phone), stdin);
    user->phone[strcspn(user->phone, "\n")] = 0;

    printf("Digite o CEP: ");
    fgets(user->cep, sizeof(user->cep), stdin);
    user->cep[strcspn(user->cep, "\n")] = 0;
}

int main(void) {
    User user;
    char RESP = 'S';

    while (RESP == 'S' || RESP == 's') {
        // Collect user data
        collectUserData(&user);
        
        // Store user data in a file
        storeUserData(&user);

        printf("\nCadastro realizado com sucesso!\n");

        printf("Deseja cadastrar outro usuario? (S/N): ");
        scanf(" %c", &RESP); // Ignoring leading whitespace
        while (getchar() != '\n'); // Clear input buffer
    }

    system("pause");
    return 0;
}
