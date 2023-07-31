#include <stdio.h>

int def(int VETOR[], int *p) {
    int i, TOTAL = 0;

    for (i = 0; i < 4; i++) {
        TOTAL = TOTAL + VETOR[i];
    }

    int MEDIA = TOTAL / 4;
    *p = MEDIA;

    return 0;
}

int main() {
    int VETOR[4];
    int x;

    for (int i = 0; i < 4; i++) {
        printf("Digite a idade da pessoa %d:", i + 1);
        scanf("%d", &VETOR[i]);
    }

    def(VETOR, &x);
    
    printf("Idade média: %d", x);

    return 0;
}

