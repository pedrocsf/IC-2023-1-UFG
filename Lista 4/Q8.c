#include <stdio.h>

int main(void) {
    int N, i = 0, j = 0, QTD_UNICOS = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int VETOR[N];

    for (i = 0; i < N; i++) {
        VETOR[i] = 0;
    }

    for (j = 0; j < N; j++) {
        int CONT = 0;
        printf("Digite um valor para ser alocado dentro do vetor: ");
        scanf("%d", &VETOR[j]);

        for (i = 0; i < j; i++) {
            if (VETOR[i] == VETOR[j]) {
                CONT = 1;
                break;
            }
        }

        if (!CONT) {
            QTD_UNICOS++;
        }
    }

    printf("Quantidade de números únicos inseridos no vetor: %d\n", QTD_UNICOS);
    return 0;
}

