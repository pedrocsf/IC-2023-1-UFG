#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int N, i, j, z, QTD_UNICOS = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int VETOR[N];

    for (i = 0; i < N; i++) {
        VETOR[i] = 0;
    }

    for (j = 0; j < N; j++) {
        bool CONT = false;
        printf("Digite um valor para ser alocado dentro do vetor: ");
        scanf("%d", &VETOR[j]);

        for (i = 0; i < j; i++) {
            if (VETOR[j] == VETOR[i]) {
                CONT = true;
                break;
            }
        }

        if (!CONT) {
            QTD_UNICOS++;
        }
    }
    
    QTD_UNICOS=QTD_UNICOS-1;

    printf("Quantidade de números únicos inseridos no vetor: %d\n", QTD_UNICOS);
    return 0;
}

