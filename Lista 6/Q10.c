#include <stdio.h>

int def(char *mensagem, char caractere);

int main() {
    char mensagem[1000];
    char caractere;

    printf("Digite uma mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite o caractere a ser retirado: ");
    scanf(" %c", &caractere);

    int substituicoes = def(mensagem, caractere);

    printf("Mensagem ajustada: %s", mensagem);
    printf("Quantidade de caracteres substituídos: %d\n", substituicoes);

    return 0;
}

int def(char *mensagem, char caractere) {
    int i, substituicoes = 0;

    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] == caractere) {
            mensagem[i] = '*';
            substituicoes++;
        }
    }

    return substituicoes;
}

