#include <stdio.h>

int main(void) {
    char PLANTAS[10][20];
    int ESTOQUE[10][2];
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Digite o nome da planta: ");
        scanf("%s", PLANTAS[i]);

        printf("Digite a quantidade de estoque atual: ");
        scanf("%d", &ESTOQUE[i][0]);

        printf("Digite a quantidade de estoque mínimo: ");
        scanf("%d", &ESTOQUE[i][1]);
    }

    for (i = 0; i < 10; i++) {
        if (ESTOQUE[i][0] < ESTOQUE[i][1]) {
            printf("A planta %s está com estoque abaixo do mínimo.\n", PLANTAS[i]);
        }
    }

    return 0;
}

