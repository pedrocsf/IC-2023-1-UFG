#include <stdio.h>
#include <string.h>

int main() {
    char NOMES[3][2][50];
    float ALTURAS[3][2];

    for (int i = 0; i < 3; i++) {
        printf("Delegacao %d:\n", i+1);
        for (int j = 0; j < 2; j++) {
            printf("Digite o nome do atleta %d: ", j+1);
            scanf("%s", NOMES[i][j]);

            printf("Digite a altura do atleta %d: ", j+1);
            scanf("%f", &ALTURAS[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int indiceMaior = 0;
        for (int j = 1; j < 2; j++) {
            if (ALTURAS[i][j] > ALTURAS[i][indiceMaior]) {
                indiceMaior = j;
            }
        }

        printf("\nDelegacao %d - Maior atleta:\n", i+1);

        for (int j = 0; j < 2; j++) {
            if (ALTURAS[i][j] == ALTURAS[i][indiceMaior]) {
                printf("Nome: %s\n", NOMES[i][j]);
                printf("Altura: %.2f\n", ALTURAS[i][j]);
            }
        }
    }

    return 0;
}


