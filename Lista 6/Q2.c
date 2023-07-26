#include <stdio.h>

int def(int VETOR[]) {
    int i, MEDIA = 0;
    for (i = 0; i < 3; i++) {
        MEDIA = MEDIA + VETOR[i];
    }
    MEDIA = MEDIA / 3;
    return MEDIA;
}

int main() {
    int i = 0, VETOR[3];

    for (i = 0; i < 3; i++) {
        printf("Digite o valor da nota:");
        scanf("%d", &VETOR[i]);
    }

    printf("Média final: %d", def(VETOR));

    return 0;
}

