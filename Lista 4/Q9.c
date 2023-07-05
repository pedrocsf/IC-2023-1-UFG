#include <stdio.h>

int main(void) {
    int VETOR[10], i, j, z, CONT;

    for (i = 0; i < 10; i++) {
        printf("Digite um valor para ser alocado no vetor: ");
        scanf("%d", &VETOR[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (VETOR[i] < VETOR[j]) {
                CONT = VETOR[j];
                VETOR[j] = VETOR[i];
                VETOR[i] = CONT;
            }
        }
    }

    printf("Lista dos números inseridos (ordem crescente):\n");
    for (z = 0; z < 10; z++) {
        printf("%d\n", VETOR[z]);
    }

    return 0;
}

